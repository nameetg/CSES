
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    vector<ll> p(n);
    for(auto &x:p) cin>>x;
    sort(p.begin(),p.end());
    ll fa=0,s=0,e=n-1;
    while(s<=e){
        ll ws=p[s]+p[e];
        fa++;
        if(ws<=x) s++,e--;
        else e--;
    }
    cout<<fa<<"\n";
}