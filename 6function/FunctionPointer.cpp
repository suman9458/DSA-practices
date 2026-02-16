#include<iostream>
using namespace std;

// void print(int *p){
//     cout<<bp<<endl;

// }
int getSum(int *arr,int size){           //This is another method to write int arr[ ]
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=i[arr];             //Another method to write arr[i]
    }
    return sum;
}

int main(){
    
    // int val=5;
    // int *p=&val;

    // print(p);

    int arr[5]={1,2,3,4,5};
    // cout<<"The sum is->"<<getSum(arr,5);

    cout<<"the sum of last 3 element is ->"<<getSum(arr+2,3);   //We can Pass From nth no of array Box
    return 0;
}