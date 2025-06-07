#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int> f;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        f[a]++;
    }
    i64 res=1,M=1e9+7;
    for(auto e:f){
        res=(res%M * (e.second+1)%M)%M;
    }
    res--;
    cout<<res;
    return 0;
}
