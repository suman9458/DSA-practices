#include<iostream>
using namespace std;

void swap(int arr[],int size)
{
	int first=0;
	//int second=1;
	while(first+1<size)
	{
		swap(arr[first],arr[first+1]);
		first=first+2;
		//second=second+2;
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i] <<" ";
	cout<<endl;
}


int main()
{
	int n;
	int arr[6]={2,4,5,6,7,9};
	int Arr[5]={3,5,7,8,9};
	swap(arr,6);
		swap(Arr,5);
	print(arr,6);
		print(Arr,5);
}
