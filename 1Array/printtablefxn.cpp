#include<iostream>
using namespace std;

void printCount( int n)

{
	for(int i=0;i<=n;i++)
	{
		cout<<i;
	}
}

int main()
{
	int n;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	cout<<"The table is =" <<printCount(n);
	
}
