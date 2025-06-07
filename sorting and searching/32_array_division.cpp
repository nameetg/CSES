#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
bool f(vector<i64> &a, i64 m, i64 k){
    i64 div=1,sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum>m){
            div++;
            sum=a[i];
        }
    }
    return div<=k;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<i64> a(n);
    i64 A=0,mx=-1;
    for(i64 &e:a) {
        cin>>e;
        A+=e,mx=max(mx,e);
    }
    i64 s=mx,e=A;
    while(s<=e){
        i64 m=(s+e)/2;
        if(f(a,m,k)) e=m-1;
        else s=m+1;
    }
    cout<<s;
    return 0;
}