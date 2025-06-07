#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int &e:a) cin>>e;
    map<int,int> f;
    i64 i=0,j=0,res=0;
    while(j<n){
        f[a[j]]++;
        while(f.size()>k){
            f[a[i]]--;
            if(!f[a[i]]) f.erase(a[i]);
            i++;
        }
        res+=(j-i+1);
        j++;
    }
    cout<<res;
    return 0;
}