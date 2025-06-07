#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n;
    cin>>n;
    vector<i64> p(n);
    for(int i=0;i<n;i++){
        i64 a;
        cin>>a;
        p[a-1]=i;
    }
    i64 res=0;
    for(int i=1;i<n;i++){
        if(p[i-1]>p[i]) res++;
    }
    cout<<res+1;
    return 0;
}
