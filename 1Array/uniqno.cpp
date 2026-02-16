#include<iostream>
using namespace std;

void twosum(int arr[],int n){
	int fn=arr[i];
	for(int i=0;i<n;i++)
	{
		int sn=arr[j];
		for(int j=0;j<n;j++)
		{
			if(arr[i]+arr[j]==7)
			{
				cout<<arr[i]<<" "<<arr[j];
				j++;
			}
		}
	}
}








int main()
{
	int arr[5]={3,4,3,6,1};
	unique(arr,5);
	twosum(arr,5);
	
}
