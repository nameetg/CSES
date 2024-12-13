#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  unsigned long long n;
  cin>>n;
  unsigned long long m = 1e9+7;
  vector<unsigned long long> v(n+1);
  v[0] = 0;
  v[1] = 1;
  for(unsigned long long i=2;i<=n;i++){
      v[i] = (v[i-1] % m + v[i-2] % m) % m;
  }
  cout<< v[n];
}