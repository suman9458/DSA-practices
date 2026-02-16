#include<iostream>
using namespace std;
int main(){

/*void change(int **p2){
    //p2=p2+1;   //change nhi hoga

    //*p2=*p2+1;  //change hoga p ke value me

    **p2= **p2+1;    //num kr value me change hoga
}

int main(){

    int num=5;

     int *p=&num;

     int **p2=&p;
    /*
     //Address num
     cout<<endl<<&num;
     cout<<endl<<p<<endl;
     cout<<*p2<<endl;

    //Value of num
    cout<<endl<<num;
    cout<<endl<<*p;
    cout<<endl<<**p2;

    //value in p

    cout<<endl<<&num;
    cout<<endl<<p;
    cout<<endl<<*p2;

    //Address of p
    cout<<endl<<&p;
    cout<<endl<<p2;

    //Adress of p2
    cout<<endl<<&p2;
    
    //BEFORE UPDATION
    
    cout<<*p<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;

    change(p2);
     //BEFORE UPDATION
    
    cout<<endl<<*p<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;
*/
// int first=8;
// int second=18;
// int *ptr=&second;
// *ptr=9;
// cout<<first<<"  "<<second;

// int first=6;
// int *p=&first;
// int *q=p;          //denoting first value
// (*q)++;
// cout<<first<<endl;             //->7

// int first=8;
// int *p=&first;
// cout<<(*p)++<<" ";   //post increment
// cout<<first<<endl;

// int *p=0;
// int first=110;
// *p=first;           //must be &first otherwise symentic error will show
// cout<<*p<<endl;     

// int arr[]={11,21,31,41};
// int *ptr=arr++;        //here we are going to change data from so error
// cout<<*ptr<<endl;

// char arr[]={"abcd"};
// char *p=&arr[1];    //print after 1 all character
// cout<<p<<endl;

// char str[]="abcde";
// char *p=str;
// cout<<str[0]<<" "<<p[0];

// int first=110;
// int *p=&first;
// int **q=&p;
// int second=(**q)++ +9;              //post increment second me 110+9 hi hoga
// cout<<first<<" "<<second<<endl;

// int first=100;
// int *p=&first;
// int **q=&p;
// int second=++(**q);
// int *r=*q;                //denoting value of first
// ++(*r);
// cout<<first<<" "<<second;

char *i=new char;
cout<<sizeof(i)<<" "<<sizeof(int);
     return 0;
}