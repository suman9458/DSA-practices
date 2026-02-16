#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;

  Node(int x) {
    data = x;
    left = NULL;
    right = NULL;
  }
};

// CREATING TREE (-1 means NULL)
Node* buildTree() {
  int data;
  cin >> data;

  if (data == -1) {
    return NULL;
  }

  Node* root = new Node(data);

  root->left = buildTree();
  root->right = buildTree();

  return root;
}

// LEVEL ORDER TRAVERSAL
void levelOrderTraversal(Node* root){
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp=q.front();
 
    q.pop();

    if(temp==NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
         cout << temp->data << " ";
      if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
      }
    }
}

//INORDER TRAVERSAL 


void inorder(Node* root){

  if(root==NULL)
    return;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
//PREORDER
void preorder(Node* root){
  if(root==NULL){
    return;
  }

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
//POSTORDER
void postorder(Node* root){
  if(root==NULL)
    return;

  postorder(root->left);
  postorder(root -> right);
  cout<<root->data <<" ";
}

void levelOrder(Node* &root){
  queue<Node*> q;

  cout << "Enter data for root:" << endl;
  int data;
  cin >> data;
  root = new Node(data);
  q.push(root);

  while(!q.empty()){
    Node *temp = q.front();
    q.pop();

    cout << "Enter left node for:" << temp->data << endl;
    int leftData;
    cin >> leftData;

    if(leftData!=-1){
      temp->left = new Node(leftData);
      q.push(temp -> left);
    }
    cout << "Enter right node for:" << temp->data << endl;
    int rightData;
    cin >> rightData;

    if(rightData!=-1){
      temp->left = new Node(leftData);
      q.push(temp -> right);
    }
  }
}


int main() {
  // Example input:
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Node* root = NULL;
  // buildTree();

  levelOrder(root);
  levelOrderTraversal(root);
  // cout << "Level Order Traversal: "<<endl;
  // levelOrderTraversal(root);

  // cout << "Inorder Traversal" << endl;
  // inorder(root);

  // cout << endl;
  // cout << "preorder Traversal" << endl;
  // preorder(root);

  // cout << endl;
  // cout << "postorder Traversal" << endl;
  // postorder(root);
  return 0;
}
