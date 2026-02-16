#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the size of array"<<endl;
    // cin>>n;

    // int *arr=new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // //printing the array
    //     cout<<"The Array is->";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    //     cout<<" ";
    
    // }
    //    int n;
    // cout<<"Enter the size of the matrix:";
    // cin>>n;

    // int** arr=new int*[n];

    //  //Taking Input of matrix
    // for(int i=0;i<n;i++){
    //     arr[i]=new int[n];
    // }

   
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //printing the matrix
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //               FOR DIFFERENT NO OF ROW AND COLUMN

           int m,n;
    cout<<"Enter the size of the row and col:";
    cin>>m>>n;

    int** arr=new int*[m];
    
     //Taking Input of matrix
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    
    //taking the input in matrix
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //printing the matrix
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
      delete[] arr;
    }
    delete []arr;
    cout<<"Delete ho gya"; 
    return 0;
}