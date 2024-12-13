#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin>>n;
  ll sum = n*(n+1)/2;
  if(sum%2) cout<<"NO";
  else
  {
    cout<<"YES"<<endl;
    vector<ll> first;
    vector<ll> second;
    if(n%2)
    {
      ll s = 1;
      while(s<=n)
        {
          first.push_back(s);
          first.push_back(s+1);
          second.push_back(s+2);
          if(s+3<=n) second.push_back(s+3);
          s+=4;
        }
    }
    else{
      first.push_back(1);
      ll s = 2;
      while(s<=n)
        {
          second.push_back(s);
          second.push_back(s+1);
          first.push_back(s+2);
          if(s+3<=n) first.push_back(s+3);
          s+=4;
        }
    }
    cout<<first.size()<<endl;
    for(int i=0;i<first.size();i++)
      {
        cout<<first[i]<<" ";
      }
    cout<<endl;
    cout<<second.size()<<endl;
    for(int i=0;i<second.size();i++)
      {
        cout<<second[i]<<" ";
      }
  }
}
