#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n,sum=0;
    cin>>n;
    map<i64,i64> m;
    vector<i64> a(n);
    for(auto &e:a) {
        cin>>e;
        m[e]++;
    }
    sort(a.begin(),a.end());
    i64 res=1;
    for(auto &e:a){
        if(e>res) break;
        res+=e;
    }
    cout<<res;
    return 0;
}
