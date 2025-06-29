#include<bits/stdc++.h>
using namespace std;
int n,m,l,s;
unordered_map<int,vector<int>> g;
unordered_map<int,int> pv;
bool dfs(int nd, int p, vector<int> &parent)
{
  pv[nd]=2;
  parent[nd]=p;
    for(int i=0;i<g[nd].size();i++)
      {
        if(!pv[g[nd][i]])
        {
          if(dfs(g[nd][i],nd,parent)) return true;
        }
        else if(pv[g[nd][i]]==2) {
          s=nd;
          l = g[nd][i];
          return true;
        }
      }
  pv[nd]=1;
  return false;
}
bool again(int t, int nd)
{
  if(nd==t) return true;
  pv[nd]=2;
  for(int i=0;i<g[nd].size();i++)
    {
      if(!pv[g[nd][i]])
      {
        if(again(t,g[nd][i])) return true;
      }
      else if(pv[g[nd][i]]==2) return false;
    }
  pv[nd]=1;
  return false;
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
    {
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
    }
  bool flag=false;
  vector<int> parent(n+1);
  for(int i=1;i<=n;i++)
    {
      if(!pv[i])
      {
        if(dfs(i,-1,parent)) 
        {
          flag = true;
          break;
        }
      }
    }
  if(flag)
  {
    vector<int> ans;
    ans.push_back(l);
    while(s != l)
      {
        ans.push_back(s);
          s = parent[s];
      }
    ans.push_back(s);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
    cout<<endl;
  }
  else cout<<"IMPOSSIBLE"<<endl;
}
