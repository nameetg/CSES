//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,mxs=INT_MAX;
string res="";

bool v(ll r, ll c, vector<string> &g){
    if(r<0||r>=n||c<0||c>=m) return false;
    if(g[r][c]=='#'||g[r][c]=='.') return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    vector<string> g(n);
    for(auto &x:g) cin>>x;
    queue<pair<ll,ll>> q;
    ll r=-1,c=-1,fr=-1,fc=-1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(g[i][j]=='A') r=i,c=j;
            if(g[i][j]=='B') fr=i,fc=j;
        }
    }
    q.push({r,c});
    while(!q.empty()){
        ll x=q.front().first,y=q.front().second;
        q.pop();
        // if(g[x][y]=='B') break;
        if(x-1>=0&&(g[x-1][y]=='.'||g[x-1][y]=='B')){
            q.push({x-1,y});
            g[x-1][y]='U';
        }
        if(x+1<n&&(g[x+1][y]=='.'||g[x+1][y]=='B')){
            q.push({x+1,y});
            g[x+1][y]='D';
        }
        if(y-1>=0&&(g[x][y-1]=='.'||g[x][y-1]=='B')){
            q.push({x,y-1});
            g[x][y-1]='L';
        }
        if(y+1<m&&(g[x][y+1]=='.'||g[x][y+1]=='B')){
            q.push({x,y+1});
            g[x][y+1]='R';
        }
    }
    // for(auto &x:g) cout<<x+'\n';
    if(g[fr][fc]=='B') cout<<"NO\n";
    else{
        cout<<"YES\n";
        while(g[fr][fc]!='A'){
            res+=g[fr][fc];
            if(g[fr][fc]=='L') fc++;
            else if(g[fr][fc]=='R') fc--;
            else if(g[fr][fc]=='U') fr++;
            else if(g[fr][fc]=='D') fr--;
        }
        cout<<res.length()<<"\n";
        for(ll i=res.length()-1;i>=0;i--) cout<<res[i];
    }
}