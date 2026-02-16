#include <iostream>
using namespace std;

// ================== SINGLY LINKED LIST ==================

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at front
void InsertAtFront(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    // empty list
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

// // Insert at tail
// void InsertAtTail(Node* &head, Node* &tail, int d) {
//     Node* temp = new Node(d);

//     // empty list
//     if (head == NULL) {
//         head = temp;
//         tail = temp;
//         return;
//     }

//     tail->next = temp;
//     tail = temp;
// }

// // Insert at given position (1-based index)
// void InsertAtPosition(Node* &head, Node* &tail, int position, int d) {

//     // insert at start
//     if (position == 1) {
//         InsertAtFront(head, tail, d);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while (cnt < position - 1 && temp != NULL) {
//         temp = temp->next;
//         cnt++;
//     }

//     if(temp == NULL) return; // out of range

//     // insert at end
//     if (temp->next == NULL) {
//         InsertAtTail(head, tail, d);
//         return;
//     }

//     // insert in middle
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
// }

// Print list
void Travesed(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// // counting node
// void counting(Node* head){
//     int cnt=0;
//     while(head!=NULL){
//         cnt++;
//         head=head->next;
//     }
//     cout<<"The number of node->"<<cnt<<endl;
// }

// //Deletion
// void deleteNode(int position,Node* &head){
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         //temp->next=NULL;
//         delete temp;
//     }
//     else{
//         Node* curr=head;
//         Node* prev=NULL;

//         int cnt=1;
//         while(cnt<position){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         //curr->next=NULL;
//         delete curr;
//     }
// }



// int main() {

//     Node* head = NULL;
//     Node* tail = NULL;

//     // Insert at front
//     InsertAtFront(head, tail, 10);
//     InsertAtFront(head, tail, 20);
//     InsertAtFront(head, tail, 30);
//     InsertAtFront(head, tail, 40);
//     InsertAtFront(head, tail, 50);

//     Travesed(head);

//     return 0;
// }





                // ================== DOUBLY LINKED-LIST ==================


//    #include<iostream>
//    using namespace std;

//    class Node{
//     public:

//     int data;
//     Node* next;
//     Node* prev;

//     Node(int value){
//         data=value;
//         next=NULL;
//         prev=NULL;
//     }
//    };

//    //printing
//    void print(Node* head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data <<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

//    }

// //length
// void length(Node* head){
//     Node* temp=head;
//     int cnt=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         cnt++;
//     }
//     cout<<"Number of Node->"<<cnt;
// }

// //inserting At head
//     void InsertAtHead(Node* &head,int value){
//         Node* newNode=new Node(value);

//          if(head == NULL){
//         head = newNode;
//         return;
//     }
//         newNode->next=head;
//         head->prev=newNode;
//         head=newNode;

//     }

//    void InsertAtEnd(Node* &head,int value)
// {
//         Node* newNode=new Node(value);
//         Node* temp=head;

//         if(head==NULL){
//             head=newNode;
//             return;
//         }
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newNode;
//         newNode->prev=temp;
//     }

//     //insert at any position

//     void InsertAtPosition(Node* &head,int position,int value){
//     Node* nodeToInsert=new Node(value);

//     if(position==1){
//         InsertAtHead(head,value);
//         return;
//     }
//         int cnt=1;
//          Node* temp=head;
//     while(cnt<position-1 && temp!=NULL){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp == NULL) return;
//     if(temp->next==NULL){
//         InsertAtEnd(head,value);
//         return;
//     }
//     nodeToInsert->next=temp->next;
//       if(temp->next!=NULL){
//         temp->next->prev=nodeToInsert;
//     }
//     temp->next=nodeToInsert;
//     nodeToInsert->prev=temp;
//     //nodeToInsert->prev=temp;

//     }
// //DELETIONs

// //Of atarting position

// void DeleteAtFront(Node* &head){
//       if(head == NULL) return;
//     Node* temp=head;
//     if(temp->next!=NULL){
//     temp->next->prev=NULL;
//     }
//     head=head->next;
//     delete temp;
// }

// //deletion at last
// void DeleteAtLast(Node* &head){
//     if(head == NULL) return;

//     // only 1 node
//     if(head->next == NULL){
//         delete head;
//         head = NULL;
//         return;
//     }

//     Node* curr = head;
//     Node* pre = NULL;

//     while(curr->next != NULL){
//         pre = curr;
//         curr = curr->next;
//     }

//     pre->next = NULL;
//     delete curr;
// }


// void DeleteAtPosition(Node* &head, int position){
//     if(head == NULL) return;

//     // delete first node
//     if(position == 1){
//         DeleteAtFront(head);
//         return;
//     }

//     Node* curr = head;
//     Node* pre = NULL;
//     int cnt = 1;

//     while(cnt < position && curr != NULL){
//         pre = curr;
//         curr = curr->next;
//         cnt++;
//     }

//     if(curr == NULL) return; // position out of range

//     pre->next = curr->next;

//     if(curr->next != NULL)
//         curr->next->prev = pre;

//     delete curr;
// }



int main(){

    // ⚠️ Doubly part ka code commented hai
    // Isliye abhi singly ka Node use ho raha hai

    Node* head = NULL;
    Node* tail = NULL;

    InsertAtFront(head, tail, 10);
    InsertAtFront(head, tail, 20);
    InsertAtFront(head, tail, 10);
    InsertAtFront(head, tail, 40);
    InsertAtFront(head, tail, 50);

    Travesed(head);

    return 0;
}



//QUESTIONS
// do one thing that correct the code and give as it code ,include comment ko comment hi
