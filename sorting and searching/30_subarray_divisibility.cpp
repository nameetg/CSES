#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<i64,i64> f;
    i64 sum=0,res=0;
    f[0]=1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        int m=-1;
        if(sum>=0) m=sum%n;
        else m=((sum%n)+n)%n;
        res+=f[m];
        f[m]++;
    }
    cout<<res;
    return 0;
}
