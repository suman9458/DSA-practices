#include<iostream>
using namespace std;
int main()
{
//    int i=1,n=20;
//    cout<<"Enter the value of n";
//     cin>>n;
//    for(; ;)
//    {
//     if(i<=n)
//     {
//     	cout<< i<<endl;
//	 }
//	 else{
//	 
//	 break;
//}
//	 i++;
//    }
//   

  //                            FIBONACCI NUMBER 
//int n=10,i,fib;
//int a=0;
//int b=1;
//cout<<a <<" "<<b<<" ";
//for(i=0;i<=n;i++)
//{
//	fib=a+b;
//	a=b;
//	b=fib;
//	cout<<fib<<" ";
//}

    
//    int n,i;
//    cout<<"Enter the number n:";
//    cin>>n;
//    
//    for(i=2;i<n;i++)
//    {
//    	if(n%i==0)
//		
//    	cout<<"This is not a prime number";
//    
//    	else
//    	cout<<"This is a prime number";
//  	break;
//	}
//    


 // IMPORTANT QUESTIONS(5)
 
 
//   for(int i= 0;i<=5; i--)
//   {
//   	cout<<i <<" ";
//   	i++;
//   }
    
     //                                    Another method for finding odd number
    
//    for(int i=1;i<=15;i+=2)
//    {
//    	cout<<i<<" ";
//    	if(i&1) {
//    	
//    		continue;
//		}
//		i++;
//	}
//    

// for( int i=0;i<5;i++)
// {
// 	for(int j=i;j<=5;j++)
// 	{
// 	if(i+j ==6)
// 	{
// 		break;
//	 }
//	 	cout<<i << " " <<j <<endl;
//	 }
//	 cout<<"new i value"<<endl;
// }
//    
//    
//    


//LEETCODE PROBLEM

//int n,answer;
//cout<<"Enter the value of n:";
//cin>>n;
//
//  	 int prod=1;
//  	int sum=0;
//  	while(n!=0)
//	{
//		int digit=n%10;
//		prod=prod*digit;
//		sum=sum+digit;
//		n=n/10;
//	}
//
//  answer=prod-sum;
// 
// cout<<answer;

    
    
    int n,rev=0,digit;
   cout<<"Enter the value of n:";
   cin>>n;
   while(n!=0)
   {
   	digit=n%10;
   	
   	rev=rev *10 + digit;
   	
   	n=n/10;
   }
    
    cout<<rev;
    
    
    
    
    
    
    
    return 0;
  	
}
