#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int> m;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      //m[num]++;
      m.insert(num);
    }
  cout<<m.size();
}