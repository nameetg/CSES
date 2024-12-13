#include<bits/stdc++.h>
using namespace std;
bool isValid(int x, int y, vector<vector<char>> &g, int n, int m, vector<vector<int>> &v)
{
  if(x<1 || x>n || y<1 || y>m || v[x][y] || g[x][y]=='#') return false;
  return true;
}
void dfs(int x, int y, vector<vector<char>> &g, int n, int m, vector<vector<int>> &v)
{
  if(!isValid(x,y,g,n,m,v)) return;
  v[x][y]=1;
  if(isValid(x+1,y,g,n,m,v)) dfs(x+1,y,g,n,m,v);
  if(isValid(x-1,y,g,n,m,v)) dfs(x-1,y,g,n,m,v);
  if(isValid(x,y+1,g,n,m,v)) dfs(x,y+1,g,n,m,v);
  if(isValid(x,y-1,g,n,m,v)) dfs(x,y-1,g,n,m,v);
}
int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<char>> g(n+1, vector<char>(m+1));
  vector<pair<int,int>> vp;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
        {
          cin>>g[i][j];
          if(g[i][j]=='.')
          {
            vp.push_back({i,j});
          }
        }
    }
  int ans = 0;
  vector<vector<int>> v(n+1, vector<int>(m+1,0));
  for(int i=0;i<vp.size();i++)
    {
      int x = vp[i].first;
      int y = vp[i].second;
      if(g[x][y]=='.' && !v[x][y])
        {
        ans++;
          dfs(x,y,g,n,m,v);
        }
    }
  cout<<ans<<endl;
}
