#include<iostream>
using namespace std;

long long int revnum(int s)
{
	int digit;
long long	int rev=0;

	while(s!=0)
	{
		digit=s%10;
		
	 rev=(rev*10)+digit;
	s=s/10;
	}
	return rev;
}

int main()
{
int n;
cin>>n;

//Function calling
cout<<"The reverse number is="<<revnum(n);
cout<<endl<<n;
return 0;
}
