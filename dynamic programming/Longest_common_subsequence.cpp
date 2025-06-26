#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int size=dp[n][m];
    cout<<size<<'\n';
    vector<int> res(size);
    int i=n,j=m;
    while(i>0&&j>0){
        if(a[i-1]==b[j-1]){
            res[size-1]=a[i-1];
            i--,j--,size--;
        }
        else if(dp[i-1][j]>=dp[i][j-1]) i--;
        else j--;
    }
    for(int e:res) cout<<e<<' ';
    return 0;
}