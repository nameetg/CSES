#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin>>n;
  vector<pair<long long,long long>> p(n);
  for(long long i=0;i<n;i++) cin>>p[i].first>>p[i].second;

  long long area =0;
  for(long long i=0;i<n;i++){
    area += p[i].first*p[(i+1)%n].second - p[i].second*p[(i+1)%n].first;
  }
  cout<<abs(area)<<endl;
}