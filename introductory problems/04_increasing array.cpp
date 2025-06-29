#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      v.push_back(num);
    }
  long long mnOps = 0;
  for(int i=1;i<n;i++)
    {
      if(v[i] < v[i-1])
      {
        mnOps += (v[i-1]-v[i]);
        v[i] = v[i-1];
      }
    }
  cout<<mnOps;
}