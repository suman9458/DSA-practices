#include<iostream>
using namespace std;

int main()
{
//     int n;
//     cin>>n;
//     int i=1,j;
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n)
//         {
//       cout<<"*";

// j++;
//         }
//         cout<<endl;
//         i++;
//     }
// int n;
// cin>>n;

// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//   cout<<i;
//   j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//      cout<<n-j+1;
//      j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//     cout<<"*";
//     j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;

// while(i<=n)
// {
//     int j=1;
// while(j<=i)
// {
// cout<<i;
// j++;
// }
// cout<<endl;
// i++;
// }


// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     int count=1;
//     while(j<=i)
// {
//     cout<<count;
//     count++;
//     j++;
// }
// cout<<endl;
// i++;
// }

// int n;
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n)
// {
    
//     int j=1;
//     while(j<=i)
//     {
//         cout<<count <<" ";
//         count++;
//       j++;
//     }
//     cout<<endl;
// i++;
// }

// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     int count=i;
//     while(j<=i)
//     {
//         cout<<count;
//         j++;
//         count++;

//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     // int count=i;
//     while(j<=i)
//     {
//         // cout<<count;
//         cout<<i+j;
//         j++;
//         // count++;

//     }
//     cout<<endl;
//     i++;
// }


// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i)
//     {
//         cout<<i-j+1;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;

// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         char ch='A'+ i - 1;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//int n;
//cin>>n;
//int i=1;
// char ch ='A';
//while(i<=n)
//{
//	 
//    int j=1;
//  
//    while(j<=n)
//    {
//        cout<<ch;
//         ch++;
//        j++;
//       
//    }
//    cout<<endl;
//    i++;
//}

//int n;
//cin>>n;
//int i=1;
//
//while(i<=n)
//{
//	 char ch='A' +i-1;
//    int j=1;
//  
//    while(j<=n)
//    {
//    
//    
//        cout<<ch;
//         ch++;
//        j++;
//       
//    }
//    cout<<endl;
//    i++;
//}

//                                             OR

//int n;
//cin>>n;
//int i=1;
//
//while(i<=n)
//{
////	 char ch='A' +i-1;
//    int j=1;
//  
//    while(j<=n)
//    {
//    
//    char ch='A' + i+j-2;
//        cout<<ch;
////         ch++;
//        j++;
//       
//    }
//    cout<<endl;
//    i++;
//}

//int n;
//cin>>n;
//int i=1;
//while(i<=n)
//{
//	int j=1;
//	while(j<=i)
//	{
//		char ch='A' +i-1;
//		cout<<ch;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//int n;
//cin>>n;
//int i=1;
//
//while(i<=n)
//{
//	 int j=1;
//	  char ch ='A'+n -i;
//   
//  
//    while(j<=i)
//    {
//        cout<<ch;
//         ch++;
//        j++;
//       
//    }
//    cout<<endl;
//    i++;
//}

  //                                                       STAR PATTERN
                                     
int n;
cin>>n;
int i=1;

while(i<=n)
{ 
int space=n - i;
while(space)
{
	cout<<" ";
	space--;
}

int j=1;
while(j<=i)
{
	cout<<j;
	j++;
}
cout<<endl;
i++;

   }                                   

//int n;
//cin>>n;
//int i=1;
//int star=n-i+1;
//while(i<=n)
//{
//	int j=1;
//	
//
//	while(j<=i)
//	{
//			
//		cout<<"*";
//		star--;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//int n;
//cin>>n;
//int i=1;
//int num=1;
//while(i<=n)
//{ 
//
//int space=n - i;
//while(space)
//{
//	
//	cout<<" ";
//	space--;
//}
//
//int j=1;
//while(j<=i)
//{
//	cout<<num;
//	num++;
//	j++;
//}
//cout<<endl;
//i++;
//
//   }   


//int n;
//cin>>n;
//int i=1;
//while(i<=n)
//{
//	
//	//space print
//	
//	int space =n-i;
//	while(space)
//	{
//		cout<<" ";
//		space--;
//	}
//	
//	//print 1st triangle
//	
//	int j;
//	while(j<=i)
//	{
//	cout<<j;
//	j++;
//}
//
//    //print 2nd triangle
//
//int start=i-1;
//while(start)
//{
//	cout<<start;
//	start--;
//	
//}
//cout<<endl;
//i++;
//}














}
