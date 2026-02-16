#include<iostream>
using namespace std;
int main()
{
	int sum=0,n;
	int arr[100];
	cout<<"Enter the size of array:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"ok done"<<endl;
	for(int i=0;i<n;i++)
	{
		sum =sum+arr[i];
	}
	cout<<"Sum of array:"<<sum;
	return 0;
}

