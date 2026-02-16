#include<iostream>
using namespace std;

//int main()
//{
//    int key;
//    int arr[5] = {2, 3, 4, 5, 6};
//    cout << "Enter the element to be searched: ";
//    cin >> key;
//
//    bool found = false;
//
//    for(int i = 0; i < 5; i++)
//    {
//        if(arr[i] == key)
//        {
//            cout << "Item is found at index " << i << endl;
//            found = true;
//            break;
//        }
//    }
//
//    if(!found)
//    {
//        cout << "Item is not found" << endl;
//    }
//
//    return 0;567
//}
#include<iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i; // Found the key
        }
    }
    return -1; // Not found after checking all elements
}

int main()
{
    int key;
    int arr[5] = {2, 3, 4, 5, 7};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout <<"\nEnter the value to be searched: ";
    cin >> key;

    int result = search(arr, 5, key); // Correct size passed here

    if(result != -1)
    {
        cout << "Item is found at index " << result << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    return 0;
}














