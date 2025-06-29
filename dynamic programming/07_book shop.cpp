#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> b(n);
  for (int i = 0; i < n; i++)
    cin >> b[i].first;
  for (int i = 0; i < n; i++)
    cin >> b[i].second;
  
  vector<vector<int>> dp(n+1, vector<int>(x+1,0));

  for(int i=0;i<=n;i++) dp[i][0]=0;
  for(int i=0;i<=x;i++) dp[n][i]=0;

  for(int i=n-1;i>=0;i--){
    for(int j=1;j<=x;j++){
      int nt = dp[i+1][j];
      int t = 0;
      if (j >= b[i].first) t = b[i].second + dp[i+1][j - b[i].first];
      dp[i][j] =max(nt, t);
    }
  }
  cout << dp[0][x] << endl;
}