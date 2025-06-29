//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
string res="";
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    vector<string> g(n);
    for(auto &x:g) cin>>x;
    queue<pair<ll,ll>> q;
    ll r=-1,c=-1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(g[i][j]=='M') q.push({i,j});
            if(g[i][j]=='A') r=i,c=j;
        }
    }
    q.push({r,c});
    while(!q.empty()){
        ll x=q.front().first,y=q.front().second;
        q.pop();
        if(x-1>=0&&g[x-1][y]=='.'){
            q.push({x-1,y});
            g[x-1][y]=(g[x][y]=='M')?'M':'U';
        }
        if(x+1<n&&g[x+1][y]=='.'){
            q.push({x+1,y});
            g[x+1][y]=(g[x][y]=='M')?'M':'D';
        }
        if(y-1>=0&&g[x][y-1]=='.'){
            q.push({x,y-1});
            g[x][y-1]=(g[x][y]=='M')?'M':'L';
        }
        if(y+1<m&&g[x][y+1]=='.'){
            q.push({x,y+1});
            g[x][y+1]=(g[x][y]=='M')?'M':'R';
        }
    }
    // for(auto &x:g) cout<<x+"\n";
    r=-1,c=-1;
    for(ll i=0;i<n;i++){
        if(g[i][0]!='#'&&g[i][0]!='.'&&g[i][0]!='M') r=i,c=0;
        if(g[i][m-1]!='#'&&g[i][m-1]!='.'&&g[i][m-1]!='M') r=i,c=m-1;
    }
    for(ll i=0;i<m;i++){
        if(g[0][i]!='#'&&g[0][i]!='.'&&g[0][i]!='M') r=0,c=i;
        if(g[n-1][i]!='#'&&g[n-1][i]!='.'&&g[n-1][i]!='M') r=n-1,c=i;
    }
    if(r==-1||c==-1)cout<<"NO\n";
    else{
        cout<<"YES\n";
        while(g[r][c]!='A'){
            res+=g[r][c];
            if(g[r][c]=='L') c++;
            else if(g[r][c]=='R') c--;
            else if(g[r][c]=='U') r++;
            else if(g[r][c]=='D') r--;
        }
        cout<<res.length()<<"\n";
        for(ll i=res.length()-1;i>=0;i--) cout<<res[i];
    }
}