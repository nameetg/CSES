#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n;
  cin>>n;
  for(ll i=1;i<=n;i++){
    ll ans= (i * i * (i * i - 1)) /2 - 4*(i-1)*(i-2);
    cout<<ans<<endl;
  }
}