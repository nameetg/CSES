#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x = 0;
  for(int i=1;i<n;i++)
    {
      int num;
      cin>>num;
      x = x^num;
    }
  for(int i=1;i<=n;i++)
    {
      x = x^i;
    }
  cout<<x<<endl;
}