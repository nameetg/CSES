#include<bits/stdc++.h>
using namespace std;

int main(){
  int M=1e9+7;
  vector<long long> ans(1e6);
  long long a = 1, b = 1;
  ans[0]=a+b;
  for(long long i=2;i<=1e6;i++){
    long long pa = a;
    long long pb = b;
    a = (2*(pa)%M)%M+(pb)%M;
    b = (4*(pb)%M)%M+(pa)%M;
    ans[i-1]=(a%M+b%M)%M;
  }
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    cout<<ans[n-1]<<endl;
  }
}