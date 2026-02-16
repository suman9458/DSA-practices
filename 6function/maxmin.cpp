#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers: "<<endl;
	cin>>a>>b>>c;
	cout<<endl;
	if((a>b && a>c )|| ( a<b && a<c))
	{
		cout<<a<<" ";
	
	}
	 if((b>a && b>c) || (b<a && b<c))
	{
		cout<<b<<" ";
	
	}
	if ((c>a && c>b) || (c<a && c<b)) 
	{
		cout<<c<<" ";
	}
	return 0;
}
