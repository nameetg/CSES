#include<bits/stdc++.h>
using namespace std;
vector<long long> dp(1e6+1,-1);
int solve(long long n){
  if(!n) return 0;
  else if(n<0) return INT_MIN;
  if(dp[n]!=-1) return dp[n];
  long long temp=n;
  long long ans =INT_MAX;
  while(temp){
      long long d = temp%10;
      if(d>0){
          long long res = solve(n-d);
          if(res!=INT_MIN) ans = min(ans,1+res);
      }
      temp/=10;
  }
  return dp[n]=ans;
}

int main(){
  long long n;
  cin>>n;
  cout<<solve(n);
}