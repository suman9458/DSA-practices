#include<iostream>
using namespace std;
void cnt(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int key=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==key)
			{
				sum++;
			}
		
		}
			cout<<"No of "<<arr[i]<<"= "<<sum<<endl;
		//key++;
	}
}
int main()
{
	int arr[5]={3,6,5,4,3};
	cnt(arr,5);
}
