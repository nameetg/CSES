#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<int>> g;
unordered_map<int,int> v;
unordered_map<int,int> id;
vector<int> ans;
int n,m;
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
    {
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      id[b]++;
    }
  queue<int> q;
  for(int i=1;i<=n;i++)
    {
      if(!id[i])
      {
        q.push(i);
      }
    }
  while(!q.empty())
    {
      int nd = q.front();
      q.pop();
      ans.push_back(nd);
      for(int i=0;i<g[nd].size();i++)
        {
          id[g[nd][i]]--;
          if(!id[g[nd][i]]) q.push(g[nd][i]);
        }
    }
  if(ans.size() != n) cout<<"IMPOSSIBLE"<<endl;
  else
  {
    for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
  }
}
