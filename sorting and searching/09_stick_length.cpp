#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &e:a) cin>>e;
    sort(a.begin(),a.end());
    int mx=a[n/2];
    i64 res=0;
    for(int e:a) res+=abs(e-mx);
    cout<<res;
    return 0;
}
