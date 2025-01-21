//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll res=0,i=0,j=0;
    while(i<n&&j<m){
      if(b[j]>=a[i]-k&&b[j]<=a[i]+k){
        res++;
        i++;
        j++;
      }
      else if(a[i]+k<b[j]) i++;
      else if(a[i]-k>b[j]) j++;
    }
    cout<<res<<"\n";
}