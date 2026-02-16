#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//    //v.pop_back();
    
//     for (int i : v) {
//         cout << i;
//     }

//     return 0; 
// }


int main()
{
    // deque<int> d;

    // d.push_back(2);
    // d.push_back(33);
    // d.pop_back();

    // for(int i:d){
    //     cout<<i<<" ";
    // }


    //  set<int> val;               //GIVE ONLY ONE  ELEMENT AT A TIME REST REGLECT 
    
    //  val.insert(12);
    //  val.insert(13);
    //  val.insert(11);
    //  val.insert(12);

    //  for(auto &i : val){
    //     cout<<i<<endl;
    //  }

    map<int,int>val;
     int arr[5]={1,2,3,4,5};
    val[1]=arr[0];
    val[2]=arr[1];
    val[3]=arr[2];
    val[4]=arr[3];
    val[5]=arr[4];

    for(auto i:val){
        cout<<i.second<<endl;
    }
    return 0;
}