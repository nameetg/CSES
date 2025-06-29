#include<bits/stdc++.h>
using namespace std;
#define i64 long long
 
int main(){
  i64 n;
  cin>>n;
  i64 M=1e9+7;
  while(n--){
    i64 a,b;
    cin>>a>>b;
    i64 res=1;
    while(b){
      if(b&1) res=(res%M * a%M)%M;
      a=(a%M * a%M)%M;
      b/=2;
    }
    cout<<res<<'\n';
  }
}
