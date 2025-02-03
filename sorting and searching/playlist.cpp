//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> k(n);
    map<ll,ll>f;
    for(auto &x:k) cin>>x;
    ll j=0,res=0;
    // f[k[0]]=0;
    for(ll i=0;i<n;i++){
        if(f.find(k[i])!=f.end()) j=max(j,f[k[i]]+1);
        f[k[i]]=i;
        res=max(res,i-j+1);
        // cout<<res<<"\n";
    }
    cout<<res<<"\n";
}
