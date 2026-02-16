#include<iostream>
using namespace std;

void table(int n)
{
	int count=1;
	int i=1;
while(i<=10)
	{
		count=n*i;
		i++;
		cout<<"\n"<<count;
	}
	
}
int main()
{
	int n;
	cout<<"Enter the value of n to print table: ";
	cin>>n;

	table(n);
	return 0;
}
