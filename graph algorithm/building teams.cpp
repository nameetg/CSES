#include<bits/stdc++.h>
using namespace std;
int n,m;
unordered_map<int,vector<int>> g;
bool dfs(int i, vector<int> &team, int t)
{
  team[i] = t;
  for(int j=0;j<g[i].size();j++)
    {
      if(team[g[i][j]]==-1)
      {
        if(dfs(g[i][j],team,!t)==false) return false;
      }
      else if(team[g[i][j]]==t) return false;
    }
  return true;
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
    {
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
  bool flag = true;
  vector<int> team(n+1,-1);
  for(int i=1;i<=n;i++)
    {
      if(team[i]==-1) if(dfs(i,team,0)==false) flag = false;
    }
  if(!flag) cout<<"IMPOSSIBLE"<<endl;
  else
  {
    for(int i=1;i<=n;i++)
      {
        if(team[i]==0) cout<<2<<" ";
        else cout<<1<<" ";
      }
    cout<<endl;
  }
}
