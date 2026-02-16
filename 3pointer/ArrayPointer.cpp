#include<iostream>
using namespace std;
// int arr[5];
// int arr1[4]={10,2,15,11};

// cout<<"1. The address of first element ->"<<&arr[0]<<endl;
// cout<<" 1. 2nd box Address"<<&arr[1]<<endl;
// cout<<"2.  another method  "<<arr<<endl;

// cout<<"3.  2nd Array me 4th value "<<arr1[3]<<endl;

// cout<<"4.  arr1 Array Address (first)"<<*arr1<<endl;    //Print first index value
// cout<<"5. 2nd ka Value"<<*(arr1+1)<<endl;           //Print 2nd box Value
// nt i=3;
// cout<<"7. "<<i[arr1]<<endl;


//cout<<"8"<<*[i+arr1]<<endl;

// int main() {
//     int arr[5] = {1,2,3,4,5};

//     int *p = &arr[0];
//     cout<<&arr[0]<<endl;
//     cout << p << endl;  // prints 1
//     p = p + 1;
//     cout << p << endl;  // prints 2

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    char* ptr = &ch;
     ch++;
    cout << *ptr << endl;
    return 0;
}
