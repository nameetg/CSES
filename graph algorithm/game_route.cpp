//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,M=1e9+7;
unordered_map<ll,vector<ll>> g;
unordered_map<ll,ll> dp;
ll dfs(ll nd){
    if(nd==n) return 1;
    if(dp.find(nd)!=dp.end()) return dp[nd];
    ll ways=0;
    for(auto &x:g[nd]) ways=(ways%M+dfs(x)%M)%M;
    return dp[nd]=ways;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    cout<<dfs(1)<<"\n";
}