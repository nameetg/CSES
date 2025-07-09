#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n>>q;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char c;
            cin>>c;
            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            a[i][j] += (c == '*');
        }
    }

    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        
        cout<<a[x2][y2] - a[x2][y1 - 1] - a[x1 - 1][y2] + a[x1 - 1][y1 - 1]<<'\n';
    }
    return 0;
}