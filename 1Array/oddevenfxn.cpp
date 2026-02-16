#include<iostream>
using namespace std;

bool iseven(int x)
{
	if(x&1)	{
return 0;	
	}
	return 1;
}

int main()
{
	int number;
	cin>>number;
	
	if(iseven(number))
	cout<<number<<"is even."<<endl;
	
	else 
	cout<<number<<"is odd."<<endl;
	
}
