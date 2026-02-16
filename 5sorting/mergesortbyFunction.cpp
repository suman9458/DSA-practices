#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy left part: s..mid
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    // copy right part: mid+1..e
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // merge both sorted arrays into original
    int index1 = 0;      // index for first[]
    int index2 = 0;      // index for second[]
    mainArrayIndex = s;  // index for arr[]

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // copy remaining elements of first[], if any
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // copy remaining elements of second[], if any
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e) {
    if (s >= e) {     // base case: 0 or 1 element
        return;
    }

    int mid = s + (e - s) / 2;

    // sort left part
    mergesort(arr, s, mid);

    // sort right part
    mergesort(arr, mid + 1, e);

    // merge both sorted halves
    merge(arr, s, e);
}

int main() {
    int arr[5] = {2, 1, 4, 5, 3};0p
    int n = 5;

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

