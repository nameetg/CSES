#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<tuple<int,int,int>> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]={x,y,i};
    }
    sort(a.begin(),a.end(),[](auto &x, auto &y){
        if(get<0>(x)==get<0>(y)) return get<1>(x)>get<1>(y);
        return get<0>(x)<get<0>(y);
    });
    int mxy=0,mny=INT_MAX;
    vector<int> cs(n),cd(n);
    for(auto &[x,y,i]:a){
        if(y<=mxy) cd[i]=1;
        mxy=max(y,mxy);
    }
    for(int i=n-1;i>=0;i--){
        auto [x,y,idx]=a[i];
        if(y>=mny) cs[idx]=1;
        mny=min(y,mny);
    }
    for(int e:cs) cout<<e<<' ';
    cout<<'\n';
    for(int e:cd) cout<<e<<' ';
    cout<<'\n';
}
