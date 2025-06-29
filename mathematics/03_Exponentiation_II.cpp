#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 f(i64 a, i64 b, i64 M){
  i64 res=1;
  while(b){
    if(b&1) res=(res%M * a%M)%M;
    a=(a%M * a%M)%M;
    b/=2;
  }
  return res;
}

int main(){
  i64 n;
  cin>>n;
  while(n--){
    i64 a,b,c,M=1e9+7;
    cin>>a>>b>>c;
    b=f(b,c,M-1);
    a=f(a,b,M);
    cout<<a<<'\n';
  }
}