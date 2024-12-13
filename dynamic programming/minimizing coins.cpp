#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> dp(1000001,-1);
bool flag = false;

ll solve(vector<ll>& c, ll x){
  if(x==0) return 0;
  else if(x<0) return INT_MAX;

  if(dp[x]!=-1) return dp[x];
  ll t=INT_MAX;
  for(ll i=0;i<c.size();i++){
    ll rec = solve(c,x-c[i]);
    if(rec!=INT_MAX) t = min(t,1+rec);
  }
  return dp[x]= t;
}

int main(){
  ll n,x;
  cin>>n>>x;
  vector<ll> c(n);
  for(ll i=0;i<n;i++) cin>>c[i];
  ll ans = solve(c,x);
  if(ans==INT_MAX) cout<<-1<<endl;
  else cout<<ans<<endl;
  return 0;
}