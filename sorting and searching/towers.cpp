//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,res=0;
    cin>>n;
    multiset<ll>m;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        auto ub=m.upper_bound(a);
        if(ub==m.end())res++;
        else m.erase(ub);
        m.insert(a);
    }
    cout<<res<<"\n";
}