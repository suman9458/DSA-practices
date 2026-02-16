#include<iostream>
using namespace std;

void swap(int arr[],int n)
{
	int left=0;
	int right=1;
	while(left!=n)
	{
		swap(arr[left],arr[right]);
		left=left+2;
		right=right+2;
	}
}
void printarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
}

int main()
{
	int n;
	int arr[6]={1,2,3,4,5,6};
	swap(arr,6);
	printarr(arr,6);
}
