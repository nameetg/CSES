#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    int n=s.length(),m=t.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++) dp[i][0]=i;
    for(int i=0;i<=m;i++) dp[0][i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
        }
    }
    cout<<dp[n][m];
    return 0;
}