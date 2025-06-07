#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &[y,x]:a) cin>>x>>y;
    sort(a.begin(),a.end());
    int res=0,le=0;
    for(auto &[y,x]:a){
        if(x>=le){
            res++;
            le=y;
        }
    }
    cout<<res;
    return 0;
}
