
// #include<iostream>
#include<queue>
// using namespace std;
// int main(){
// queue<int>ans;
// //push
// ans.push(10);
// ans.push(20);
// ans.push(30);
// cout << "front is->" << ans.front()<<endl;
// cout << "Size of queue is->" << ans.size()<<endl;
// ans.pop();
// cout << "front is->" << ans.front()<<endl;
// // cout << "Size of queue is->" << ans.size()<<endl;
// }
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//   deque<int> d;

//   d.push_front(10);
//   d.push_back(20);
//   cout<<"front is->" << d.front() << endl;
//   cout<<"back is->" << d.back() << endl;
//   d.pop_front();
//   cout<<"front is->" << d.front() << endl;
// }





                          // CIRCULAR QUEUE IMPLEMENTATION
class MyCircularQueue {
    private:
    int* arr;
    int size;
    int front;
    int rear;
public:
    MyCircularQueue(int k) {
        size=k;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if((rear + 1) % size == front){
            return false;
        }
        else if(rear==-1){
            front=rear=0;
            arr[rear]=value;
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
        return true;
    }
    
    bool deQueue() {
     if(rear==-1){
        return false;
     }
     else if(front==rear){
        front=-1;
        rear=-1;
     }
     else{
        front=(front+1)%size;
     }
     return true;
    }
    
    int Front() {
        if(rear==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(rear==-1){
            return -1;
        }
        else{
            int ans=arr[rear];
            return ans;
        }
    }
    
    bool isEmpty() {
        if(rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
           if((rear + 1) % size == front){
            return true;
           }
           else{
            return false;
           }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */


                                       //REVERSE QUEUE
            class Solution {
    void reverse(queue<int> &q){
        if(q.empty()){
            return;
        }
        int element=q.front();
        q.pop();
        reverse(q);
        q.push(element);
    }
  public:
    void reverseQueue(queue<int> &q) {
     reverse(q);
    }
};                           