#include<iostream>
using namespace std;

int  sizecal(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
          cnt++;
    }
    return cnt;
}

void reverse(char name[], int n)
{
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int main(){

    char name[20];
    cout<<"Enter your name:";
    cin>>name;
   int len=sizecal(name);
   cout<<"Size of name is:"<< sizecal(name)<<endl;

   reverse(name,len);
   cout<<"Reverse array="<<name;


    return 0;
}