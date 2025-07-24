#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
const int M = 1e9 + 7;
int inf = INT_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        if(k * k < n) cout<<"IMPOSSIBLE\n";
        else{
            int s = 1, e = k;

            while(true){
                for(int i = e; i >= s; i--) cout<<i<<' ';
                if(e == n) break;
                s = e + 1;
                e = min(e + k, n);
            }
            cout<<'\n';
        }
    }
    return 0;
}