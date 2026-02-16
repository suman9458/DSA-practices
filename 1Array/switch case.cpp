#include<iostream>
using namespace std;

int main()
{
// 		char num;
// 	cin>>num;

	
// 	switch(num)
// 	{
// 		case 'a': cout<<"First" <<endl;
// 		//break;
// 		case 'b': cout<<"Second" <<endl;
// 		break;
// 		default : cout<<"Not exits"<<endl;
// 	}
// 	cout<<endl;
// 	return 0;
//               NESTED SWITCH
int num=1;
char ch='1';

switch(num)
{
	case 1: switch(ch){
	case '1':
   cout<<"This is one:"<<endl;
   break;
}
   break;

   case 2:
   cout<<"This is second:"<<endl;
   break;

   case 3:
   cout<<"this is third:"<<endl;
   break;

}





return 0;

}
