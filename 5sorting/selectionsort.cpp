// selection sort

#include<iostream>
using namespace std;

void Selsort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}

int main()
{
	int size;
    cout <<"Enter the size of array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
    cin>>arr[i]; 
    }

    Selsort(arr, size);

    cout << "Sorted array: ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
