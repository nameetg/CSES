#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &e:a) cin>>e;
    map<int,int> f;
    i64 res=0,j=0;
    for(int i=0;i<n;i++){
        if(f.count(a[i])&&f[a[i]]>=j) j=f[a[i]]+1;
        f[a[i]]=i;
        res+=(i-j+1);
    }
    cout<<res;
    return 0;
}