//1 to N print
#include<iostream>
using namespace std;

// int Print(int n){
//     if(n==0)
//     return 0;

//  Print(n-1);
// cout<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;

//    int ans= Print(n);
   
// }


    //ptint N to 1

// int Print(int n){
//     if(n==0)
//     return 0;
// cout<<n<<endl;
//  Print(n-1);

// }

// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;

//    int ans= Print(n);
   
// }

 //SUMMATION N NATURAL NUMBER
// int naturalSum(int n){
//     if(n==0)
//     return 0;

//     return n+naturalSum(n-1);
// }


// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;

//    int ans= naturalSum(n);
//    cout<<"Answer is ->"<<ans;
   
// }

//Factorial of a number
// int factorial(int n){

//         if(n==1){
//             return 1;
//         }

//         return n*factorial(n-1);
//     }


// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;

//    int ans= factorial(n);
//    cout<<"Answer is ->"<<ans;
   
// }

//POWER OF THE NUMBER(e.g. a^b using recursion)

// int power(int a,int b){

//   if(b==0)
//   return 1;
// if(b==1)
// return a;

// return a* power(a,b-1);

// }
// int main(){
//     int a,b;
//     cout<<"Enter the numbers:";
//     cin>>a>>b;

//    int ans= power(a, b);
//    cout<<"Answer is ->"<<ans;
   
// }

//                          REVERSE A STRING

//   void reverse(string &str,int i,int j){
     
//     if(i>j)
//     return;

//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);

//    }


// int main(){
//     string name="Suman";

//     reverse(name,0,name.length()-1);
//     cout<<name<<endl;
//     return 0;
// }

                     //CHECK PALLIDROME USING n-i-1
 //bool palidrome(string & str,int i){
//   int n=str.length();
//   if(i>n/2)
//   return true  ;

//   if(str[i]!=str[n-i-1])
//   return false;

//   palidrome(str,i+1);
// }
        

// int main(){
//     string name="soos";

    

//     if(palidrome(name,0)){
//       cout<<"This is palidrome";
//     }
//     else{
//       cout<<"Not pallidrome";
//     }
//     return 0;
// }

//                             Another method to find power




// int power(int a,int b){

//   if(b==0)
//   return 1;

// if(b==1)
// return a;

// int ans=power(a,b/2);

// if(b%2==0){
//   return ans*ans;
// }
// else{
//   return a*ans*ans;
// }

// }
// int main(){
//     int a,b;
//     cout<<"Enter the numbers:";
//     cin>>a>>b;

//    int ans= power(a, b);
//    cout<<"Answer is ->"<<ans;
   
// }
     
//                                              BUBBLESORT BY RECURSION
// void bubblesort(int *arr,int n)
// {
//   if(n==0 || n==1)
//   return;

//   for(int i=0;i<n-1;i++){
//     if(arr[i]> arr[i+1]){
//       swap(arr[i],arr[i+1]);
//     }
//   }

//   bubblesort(arr,n-1);
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the  array:";
//     cin>>n;

//     int *arr=new int[n];
//     for(int k=0;k<n;k++){
//         cin>>arr[k];
//     }
//     //cout<<endl;
    
//     bubblesort(arr,n);

//     cout << "Sorted array: ";
//     for(int i=0; i<n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }
 //                                                   selectionsort
void selectionsort(int *arr,int n,int i=0){
  if(i==n-1)
    return;
  
     int min=i; 
  for(int j=i+1;j<n-1;j++){
  
    if(arr[j]<arr[min])
    min=j;
  }
  swap(arr[i],arr[min]);
  selectionsort(arr,n,i+1);
}

int main()
{
    int n;
    cout<<"Enter the size of the  array:";
    cin>>n;

    int *arr=new int[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    
    selectionsort(arr,n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}


