#include<iostream>
using namespace std;

int fib( int n)
{
          
	int nthfib;
	int fib;
	int a=0;
	int b=1;
	
//	cout<<a<<" "<<b;
	
	for(int i=0;i<n;i++)
	{
		fib=a+b;
		a=b;
		b=fib;
//		cout<<fib<<" ";
		
	}
		nthfib= fib	;
	
	
	cout<<"fib value is= "<< nthfib<<endl;

}
int main()
{
	int n;
	cout<<"Enter the value of n: \n";
	cin>>n;
	
	fib(n);
}
