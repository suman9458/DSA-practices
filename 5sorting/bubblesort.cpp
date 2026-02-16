#include<iostream>
using namespace std;

void bubblesort(int *arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
            }
           
		
        }
    }
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
    //cout<<endl;
    
    bubblesort(arr,n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
