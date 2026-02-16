#include<iostream>
using namespace std;

// int findfact(int n){

//     if(n==0){
//         return 1;
//     }
//     // int sfact=findfact(n-1);
//     // int bfact=n*sfact;
//     // return bfact;


//                                              OR    return n * findfact(n-1);
// }


// int main(){
// int n;
// cout<<"enter the value of n";
// cin>>n;

// int ans=findfact(n);
// cout<<"Answer is->"<<ans<<endl;

// }


// #include<iostream>
// using namespace std;

// void printcount(int n){ 
//     if(n == 0)
//         return; 

//     cout << n <<endl; 
//     printcount(n - 1); 

// }

// int main(){
//     int n;
//     cout << "Enter the number -> ";
//     cin >> n;
//     printcount(n);
//     return 0;
// }

// reachHome(int strt,int dest){
//     cout<<"Kaha pahuche "<<strt<<" "<<"Destination->"<<dest<<endl;

//     if(strt==dest){

        
//         cout<<"Pahuch gye";
//         return 0;
//     }
//     strt++;
//     reachHome(strt,dest);

// }


// int main(){
//     int strt=0;
//     int dest=10;
    
//     reachHome(strt,dest);

                                             //FIB OR NOT

// int fib(int n){

//  if(n==0)
//  return 0;

//  if(n==1)
//  return 1;

//  return fib(n-1)+fib(n-2);

// }
// int main(){
//     int n;
//     cout<<"Enter the number->"<<endl;
//     cin>>n;

//     int ans=fib(n);
//    cout<<"Answer is->"<<ans;

//  return 0;
// }

// int arrSum(int *arr,int size){

//   if(size==0){
//     return 0;
//   }
//   if(size==1){
//     return arr[0];
//   }

//   int remainingpart=arrSum(arr+1,size-1);
//  int sum = arr[0]+remainingpart;
//  return sum;
// }

// int main(){
  
// int arr[5]={1,2,3,4,5};

// int ans=arrSum(arr ,5);
// cout<<"Sum->"<<ans;
// return 0;
// }


// LinearSearch(int *arr,int size,int key){
//   if(size==0){
//     return false;
//   }
//   if(arr[0]==key){
//     return true;
//   }
  
//   int RemainElement=LinearSearch(arr+1,size-1 ,key);
//   return RemainElement;

// }


// int main(){
  
// int arr[5]={1,2,3,4,5};
// int key;
// cout<<"Enter the key->";
// cin>>key;

// bool ans=LinearSearch( arr,5,key);
// if(ans){
//   cout<<"Element is found";
// }
// else{
//   cout<<"Not found";
// }
// return 0;
// }
int binarySearch(int *arr,int n,int first,int end,key){
  
  
  if(first>end){
    return -1;
  }
  int mid=first(end-first)/2;
  if(arr[mid]==key){
    return 1;
  }

  if(arr[mid]<key){
    return binarySearch(arr,mid+1,end,key);
  }
  else{
    return binarySearch(arr,mid-1,first,key);
  }
}


int main(){
  
int arr[5]={1,2,3,4,5};
int key;
cout<<"Enter the key->";
cin>>key;

bool ans=binarySearch( arr,5, 0 ,4 , key);
if(ans){
  cout<<"Element is found";
}
else{
  cout<<"Not found";
}
return 0;
}