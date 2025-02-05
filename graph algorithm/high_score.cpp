//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
unordered_map<ll,vector<pair<ll,ll>>> g;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b,x;
        cin>>a>>b>>x;
        g[a].push_back({b,x});
    }
    vector<ll> d(n+1,-1e10);
    d[1]=0;
    for(ll i=0;i<n;i++){
        for(auto &a:g){
            if(d[a.first]!=-1e10){for(auto &x:a.second){
                auto [nd,dd]=x;
                d[nd]=max(d[nd],d[a.first]+dd);
            }}
        }
    }
    bool fg=0;
    for(auto &a:g){
        if(d[a.first]!=-1e10){for(auto &x:a.second){
            auto [nd,dd]=x;
            if(d[a.first]+dd>d[nd]){
                queue<ll> q;
                q.push(a.first);
                unordered_map<ll,ll>v;
                while(!q.empty()){
                    ll fn=q.front();q.pop();
                    if(fn==n){
                        fg=1;
                        break;
                    }
                    v[fn]=1;
                    for(auto &e:g[fn]){
                        if(!v[e.first]) q.push(e.first);
                    }
                }
            }
            if(fg) break;
        }}
        if(fg) break;
    }
    if(fg) cout<<-1<<"\n";
    else cout<<d[n]<<"\n";
}
