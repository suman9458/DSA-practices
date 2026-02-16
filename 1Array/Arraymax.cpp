#include<iostream>
using namespace std;

int max( int arr[] ,int size)
{
	int max=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if( arr[i]>max)
		{
			max=arr[i];
		} 
		
	}
	cout<<"max number in array is:"<<max<<endl;
}
int min( int arr[] ,int size)
{
	int min=INT_MAX;
	for(int i=0;i<size;i++)
	{
		if( arr[i]<min)
		{
			min=arr[i];
		}
		
	}
	cout<<"min4 number in array is:"<<min;
	return min;
}

int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[5];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max(arr ,n);
	min(arr , n);
	return 0;
}
