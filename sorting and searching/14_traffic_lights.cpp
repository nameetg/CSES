//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,n;
    cin>>x>>n;
    set<ll> s;
    multiset<ll>m;
    s.insert(0);
    s.insert(x);
    ll fe;cin>>fe;
    s.insert(fe);
    m.insert(fe),m.insert(x-fe);
    cout<<max(fe,x-fe)<<" ";
    for(ll i=1;i<n;i++){
        ll a;
        cin>>a;
        auto ub=s.upper_bound(a);
        ll d=*ub-*prev(ub);
        auto it=m.find(d);
        m.erase(it);
        m.insert(*ub-a),m.insert(a-*prev(ub));
        s.insert(a);
        cout<<*m.rbegin()<<(i==n-1?"\n":" ");
    }
}