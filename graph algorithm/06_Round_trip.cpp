#include<bits/stdc++.h>
using namespace std;
int n,m,l=-1,en;
unordered_map<int,vector<int>> g;
bool dfs(int node, vector<int> &parent, int p)
{
  parent[node]=p;
  for(int i=0;i<g[node].size();i++)
    {
      if(!parent[g[node][i]])
      {
        if(dfs(g[node][i],parent,node)) return true;
      }
      else if(g[node][i]!=p) 
      {
        l=node; 
        // parent[g[node][i]]=p;
        en = g[node][i];
        return true;
      }
    }
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
      g[b].push_back(a);
    }
  vector<int> parent(n+1,0);
  bool flag = false;
  for(int i=1;i<=n;i++)
    {
      if(!parent[i])
      {
        if(dfs(i,parent,-1)==true)
        {
          flag = true;
          break;
        }
      }
    }
  if(!flag) cout<<"IMPOSSIBLE"<<endl;
  else
  {
 
    vector<int> ans;
    int temp = l;
    while(parent[temp] != -1 && temp != en)
      {
        ans.push_back(temp);
        temp = parent[temp];
      }
    ans.push_back(temp);
    ans.push_back(ans[0]);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
    cout<<endl;
  }
}
