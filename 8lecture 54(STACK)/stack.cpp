#include<iostream>
// #include<stack>
using namespace std;

//int main(){
  // stack<int> s;
  // s.push(10);
  // s.push(20);
  // s.push(30);
  // cout << "The top element is->" << s.top() << endl;
  // //cout << "The bottom element is ->" << s.bottom() << endl;
  // if(s.empty()){
  //   cout << "Stack is empty" << endl;
  // }
  // else{
  //   cout << "Stack is not empty" << endl;
  // }

  
  // s.pop();
  // cout << "The size of stack is->" << s.size();
//}
  class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

//behaviour
  stack(int val){
    size = val;
    arr = new int[size];
    top = -1;
  }   
  
  void insertion(int element){
    if(top<size-1){
      top = top + 1;
      arr[top] = element;
      
    }
    else{
      cout << "Stack is overflow." << endl;
    }
  }

  void pop(){
    if(top>=0){
    top--;
 
    }
    else{
      cout << "Stack is underflow" << endl;
    }

   }

   int peek(){
    if(top>=0){
      return arr[top];
    }
    else{
      cout << "Stack is empty";
      return -1;
    }
   }

   bool empty(){
    if(top==-1){
      return true;
    }
    else{
      return false;
    }
   }
void traverse(){
     for (int i = top; i >= 0;i--)
     {
       cout << arr[i] << endl;
     }
   }
  };
  int main(){
    stack st(5);
    st.insertion(10);
    st.insertion(20);
    st.insertion(30);
    st.insertion(40);
     st.insertion(50);
      cout << "Insertion is succesfully"<<endl;
     //st.pop();
    // cout << "Item is successfully poped"<<endl;
    st.traverse();

  }