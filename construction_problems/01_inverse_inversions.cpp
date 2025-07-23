#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
const int M = 1e9 + 7;
int inf = INT_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    i64 k;
    cin>>k;

    int s = 1, e = n;

    for(int i = 1; i <= n; i++){
        if(k >= n - i) {
            cout<<e<<' ';
            e--;
            k -= (n - i);
        }
        else {
            cout<<s<<' ';
            s++;
        }
    }
    return 0;
}