#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1e9+7;
ll solve(ll n){

  ll dp[n+1] = {};

  dp[0]=1;

  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=6 && j<=i; j++){
      dp[i] = (dp[i]+dp[i-j])%M;
    }
  } 
  return dp[n];
}

int main(){
  ll n;
  cin>>n;
  cout<<solve(n)<<endl;
  return 0;
}