#include<iostream>
using namespace std;

void pattern1(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"* ";
    }
    cout<<endl;
   } 
    
}
void pattern2(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       
        cout<<"* ";
        
    }
    cout<<endl;
   } 
    
}
void pattern3(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       
        cout<<j+1<<" ";
        
    }
    cout<<endl;
   } 
    
}
void pattern4(int n){
   for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){  // also j<n-i+1
       
        cout<<"* ";
        
    }
    cout<<endl;
   } 
    
}
void pattern5(int n){
   for(int i=0;i<n;i++){
    for(int j=1;j<n-i+1;j++){  // also j<n-i+1
       
        cout<<j;
        
    }
    cout<<endl;
   } 
    
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        
        //space
    for(int j=0;j<n-i-1;j++){
    cout<<" ";
    }
        //star
    for(int j=0;j<2*i+1;j++){
    cout<<"*";
    }
        //space
    for(int j=0;j<n-i-1;j++){
    cout<<" ";
    }
    cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        
        //space
    for(int j=0;j<i;j++){
    cout<<" ";
    }
        //star
    for(int j=0;j<2*n-(2*i+1);j++){
    cout<<"*";
    }
        //space
    for(int j=0;j<i;j++){
    cout<<" ";
    }
    cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        //star

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

     for(int i=0;i<n;i++){
        
        //space
    for(int j=0;j<i;j++){
    cout<<" ";
    }
        //star
    for(int j=0;j<2*n-(2*i+1);j++){
    cout<<"*";
    }
        //space
    for(int j=0;j<i;j++){
    cout<<" ";
    }
    cout<<endl;
    }
}
int main(){
    int n=5;
   // cin>>n;
   
   pattern8(n);
    //pattern7(n);
}