#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of element:";
    cin>>n;

    int arr[n];
    cout<<"ENter the n element of the element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"printing user input array:";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr2[4]={1,2,3,4};
     cout<<"Array printing= ";
    for(int i=0;i<n;i++){
       
        cout<<arr2[i]<<" ";
    }
    return 0;
}