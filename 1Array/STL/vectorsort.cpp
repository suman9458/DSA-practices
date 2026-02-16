#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> v={34,5,6,21,222,0 };
   sort(v.begin(), v.end());
  for(int i:v){
    cout<<i<<" ";
  }
}
