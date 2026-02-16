#include<iostream>
using namespace std;


//GLOBAL VARIABLE

void a(int &i){
    cout<<"The value of i->"<<endl;
    cout<<i*2<<endl;
}
void b(int &i){
    cout<<"The value of i in b is->"<<endl;
    cout<<i;
}
int main(){
    int i=433;

    a(i);
    b(i);
    return 0;
}





// #MACRO   


// #define pi 3.14
// #define ele 1,2,3
// #define max(a,b)  ( ((a)>(b))? (a):(b))     

// int main(){
//     int a=20;
//     int b=32;

//     cout<<"Maximum number is->"<<max(a,b);
//     return 0;
// }







            // int main(){
            //     int arr[3]={ele};

            //     for(int i=0;i<3;i++){
            //         cout<<arr[i];
                  
            //     }
            //       return 0;
            // }

// int areacircle(int& n){
// int area=pi*n*n;
// return area;

// }


// int main(){

// int r;
// cout<<"Enter the value of r->";
// cin>>r;
// int ans=areacircle(r);
// cout<<"Area of circle is->"<<ans;
// }