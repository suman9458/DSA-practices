#include<iostream>
using namespace std;
int main(){
  int arr[5] = {2, 3, 4, 3, 2};
  int max = -1;
  for (int i = 0; i < 5; i++)
  {
     if(arr[i]>max){
       max = arr[i];
     }

  }
  cout << "max number is->" << max;
}