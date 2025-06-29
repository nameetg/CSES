#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(1001,vector<int>(1001,-1));
bool isValid(vector<vector<char>> &g, int r, int c){
  if(r>=0&&r<g.size()&&c>=0&&c<g.size()) return g[r][c]!='*';
  return false;
}

int solve(vector<vector<char>> &g, int r, int c){
  if(!r && !c) return 1;
  int M=1e9+7;
  if(dp[r][c]!=-1) return dp[r][c];
  int ans=0;

  if(isValid(g,r-1,c)) ans=(ans+solve(g,r-1,c))%M;
  if(isValid(g,r,c-1)) ans=(ans+solve(g,r,c-1))%M;
  
  return dp[r][c]=ans%M;
}

int main(){
  int n;
  cin>>n;
  vector<vector<char>> g(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) cin>>g[i][j];
  }
  if(g[n-1][n-1]=='*') cout<<0<<endl;
  else cout<<solve(g,n-1,n-1);
}