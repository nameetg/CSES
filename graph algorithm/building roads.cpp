#include<bits/stdc++.h>
using namespace std;
int n,m;
unordered_map<int,int> v;
unordered_map<int,vector<int>> g;
void bfs(int n)
{
  queue<int> q;
  q.push(n);
  while(!q.empty())
    {
      int f = q.front();
      q.pop();
      v[f]=1;
      for(int i=0;i<g[f].size();i++)
        {
          if(!v[g[f][i]]) q.push(g[f][i]);
        }
    }
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
  // int num =0;
  vector<int> ans;
  for(int i=1;i<=n;i++)
    {
      if(!v[i])
      {
        ans.push_back(i);
        bfs(i);
      }
    }
  if(ans.size()==0)
  {
    cout<<0<<endl;
  }
  else
  {
    cout<<ans.size()-1<<endl;
    for(int i=1;i<ans.size();i++)
      {
        cout<<ans[i-1]<<" "<<ans[i]<<endl;
      }
  }
}