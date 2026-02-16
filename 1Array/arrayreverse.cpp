#include <iostream>
using namespace std;

void Reversearr(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {2, 3, 1, 5, 4};
    Reversearr(arr, 5);
    printarr(arr, 5);
    return 0;
}
