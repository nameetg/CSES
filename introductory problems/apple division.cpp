#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(vector<ll> p, ll a, ll b, ll ind){
  if(ind>=p.size()) return abs(a-b);

  ll cA = solve(p, a+p[ind], b, ind+1);
  ll cB = solve(p, a, b+p[ind], ind+1);

  return min(cA,cB);
}

int main(){
  ll n;
  cin>>n;
  vector<ll> p(n);
  for(ll i=0;i<n;i++) cin>>p[i];
  cout<<solve(p, 0, 0, 0)<<endl;
}