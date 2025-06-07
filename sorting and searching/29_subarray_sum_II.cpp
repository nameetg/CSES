#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    map<i64,i64> f;
    i64 sum=0,res=0;
    f[0]=1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        res+=f[sum-x];
        f[sum]++;
    }
    cout<<res;
    return 0;
}