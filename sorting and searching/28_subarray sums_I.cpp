#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll totalSub(vector<ll> v, ll x)
{
  ll ans=0;
  ll i=0,j=0;
  ll sum =0;
  while(i<v.size())
    {
      sum += v[i];
      while(sum > x)
        {
          sum -= v[j];
          j++;
        }
      if(sum==x) ans++;
      i++;
    }
  return ans;
}
int main()
{
  ll n, x;
  cin>>n;
  cin>>x;
  vector<ll> v(n);
  for(int i=0;i<n;i++)
    {
      ll temp;
      cin>>temp;
      v[i]= temp;
    }
  ll ans = totalSub(v, x);
  cout<<ans;
}