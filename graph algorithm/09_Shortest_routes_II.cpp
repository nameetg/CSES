//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,q,M=1000000000000;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>q;
    vector<vector<ll>> g(n+1,vector<ll>(n+1,M));
    for(ll i=0;i<m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        g[u][v]=min(g[u][v],w);
        g[v][u]=min(g[v][u],w);
    }
    for(ll i=1;i<=n;i++) g[i][i]=0;
    for(ll k=1;k<=n;k++){
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }
    for(ll i=0;i<q;i++){
        ll u,v;
        cin>>u>>v;
        cout<<(g[u][v]<M?g[u][v]:-1)<<"\n";
    }
}