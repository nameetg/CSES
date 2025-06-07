#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n,p=0,j=0,res=0;
  cin>>n;
  vector<ll>a(n),b(n);
  for(ll i=0;i<n;i++) cin>>a[i]>>b[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  for(ll i=0;i<n;i++){
      while(j<n&&b[j]<a[i]){
          p--;
          j++;
      }
      p++;
      res=max(res,p);
  }
  cout<<res<<"\n";
}