#include<iostream>
#include<stack>
using namespace std;

class Node{
  int data;
  Node* next;

  Node( int val){
    data=val;
    next=NULL
  } 
};

class stack{
  Node* top;

  public:
  stack(){
    top = NULL;
  }
  
  void push(int x){
    Node*temp=new Node(x);
    temp->next=top;
    top=temp;
  }
};

int main(){
  stack s;
  s.push(8);
}