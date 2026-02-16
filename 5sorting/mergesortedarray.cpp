#include<iostream>
using namespace std;

void mergearray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i=0, j=0, k=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void printarray(int ans[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {2,3,5,7,8};
    int arr2[4] = {3,6,7,9};
    int arr3[9] = {0};

    mergearray(arr1, 5, arr2, 4, arr3);
    printarray(arr3, 9);

    return 0;
}
