//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    multiset<ll> a;
    for(ll i=0;i<n;i++){
        ll h;cin>>h;
        a.insert(h);
    }
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        if(a.size()==0){
            cout<<-1<<"\n";
            continue;
        }
        auto ub=a.upper_bound(x);
        if(ub==a.begin()) cout<<-1<<"\n";
        else{
            cout<<*prev(ub)<<"\n";
            a.erase(prev(ub));
        }
    }
}