#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll ans = 0;
  while(n)
    {
      ans += (__builtin_popcountll(n));
      n--;
    }
  cout<<ans;
}