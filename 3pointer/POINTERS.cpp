#include<iostream>
using namespace std;

int main(){
/*int num=5;

    cout<<"The address of num is"<<&num<<endl;

    int *t=0;
    t=&num;
    cout<<"Another method for initilization pointer: ->"<<*t<<endl;

   //Double pointerx
    int *p=&num;
     cout<<"p= "<<p<<endl;
    cout<<"*p= "<<*p<<endl;
    *p=*p+1;
   

    int *q=p;
    cout<<"q= "<<q<<endl;
    cout<<"*q= "<<*q<<endl;

    cout<<"before q increament "<<q<<endl;
    q=q+1;   //adress increment by 4(for int)
    cout<<"After q increament "<<q<<endl;
    cout<<*p;
    return 0;
}*/

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     int * p = & a; //pointer
//     int ** q = & p; //pointer-to-pointer
//     /* Next three statements will print same value i.e. address of a */
//     cout <<"1 ->"<< & a << endl;
//     cout <<"2 ->"<< p << endl;
//     cout <<"3 ->"<< * q << endl;
//     /* Next two statements will print same value i.e. address of p */
//     cout <<"4 ->"<< & p << endl;
//     cout <<"5 ->"<< q << endl;
//     /* Next three statements will print same value i.e. value of a */
//     cout <<"6 ->"<< a << endl;
//     cout <<"7 ->"<< * p << endl;
//     cout << "8 ->"<<** q << endl;
//     return 0;
// }


/*Types of pointers in C++
 

There are different types of pointers in C++, and they are as follows:

Null Pointers
Double Pointers
Void Pointers
Wild Pointers
Dangling Pointer

1. NULL POINTER 
A NULL pointer is a pointer that is pointing to nothing. If we don’t have the address to be assigned to a pointer, we can use NULL.

 

Advantages of Null pointer are:

We can initialize a pointer variable when that pointer variable is not assigned any actual memory address.
We can pass a null pointer to a function argument when we are unwilling to pass any actual memory address.
 

Example:

int *p; //Contains garbage value
int *p = NULL; //NULL is constant with vaue 0
int *q = 0; // Same as above

2. DOUBLE POINTER:  
We can create a pointer to a pointer that in turn may point to data or another pointer. The first pointer is used to store the address of the variable. And the second pointer is used to store the address of the first pointer. That is why they are also known as double pointers.

 

Example:

int a = 10;
int *p = &a; 
int **q = &p;

 

3. VOID POINTER:
A void pointer is a generic pointer; it has no associated type with it. A void pointer can hold an address of any type and can be typecasted to any type. Thus we can use the void pointer to store the address of any variable.

Void pointer is declared by: 
void *ptr;
4.WILD POINTER:
 A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory location.

Example:

int *ptr; //wild pointer
*ptr = 5;
 
Note: If a pointer p points to a known variable, it’s not a wild pointer.

Example:

int * p; // wild pointer
int a = 10;
p = & a; //p is not a wild pointer now
* p = 12; //This is fine. Value of a is changed

*/

















return 0;
}
