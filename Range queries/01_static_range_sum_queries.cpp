#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<i64> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]^=a[i-1];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<(a[y]^a[x-1])<<'\n';
    }
    return 0;
}