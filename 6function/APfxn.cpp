#include<iostream>
using namespace std;

int AP(int n)
{
	int nth=0;
	int a=10;
	int d=3;
	nth=(a + (n-1)*d);
//	return nth;
	cout<<nth;
}
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	 AP( n);

	
}
