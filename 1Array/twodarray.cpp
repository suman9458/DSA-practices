#include<iostream>
#include <climits>

using namespace std;


  void Sumrow(int arr[][3], int rows, int cols)
  {
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
      cout << "Row " << i << " sum = " << sum << endl;

    }
  }

  int Largestelemnt(int arr[][3],int row ,int column){
    int maxi=INT_MIN;
    int Index=-1;
for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
        maxi=sum;
        Index=i;
    }
  }
  cout<<"The maximum element is"<<maxi<<endl;
  return Index;
}
int main()
{
    int arr[3][3];

    // Input loop
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        } 
    }

    // Output loop
    for(int i = 0; i < 3; i++)
    {
    
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }

    Sumrow(arr,3,3);
    cout<<"The largest element Index is ="<<Largestelemnt(arr,3,3);

    return 0;
}
