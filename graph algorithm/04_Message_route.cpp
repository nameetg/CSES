#include<bits/stdc++.h>
using namespace std;
int n,m;
unordered_map<int,vector<int>> g;
void shortestPath(vector<int> &parent)
{
  queue<pair<int,int>> q;
  q.push({0,1});
  vector<long long> d(n+1,LLONG_MAX);
  d[1] = 0;
  while(!q.empty())
    {
      int dist = q.front().first;
      int nd = q.front().second;
      q.pop();
      for(int i=0;i<g[nd].size();i++)
        {
          if(dist + 1 < d[g[nd][i]])
          {
            d[g[nd][i]] = dist + 1;
            parent[g[nd][i]] = nd;
            q.push({dist+1, g[nd][i]});
          }
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
  vector<int> parent(n+1);
  for(int i=1;i<=n;i++)
    {
      parent[i] = i;
    }
  shortestPath(parent);
  vector<int> ans;
  int nd = n;
  while(parent[nd] != nd)
    {
      ans.push_back(parent[nd]);
      nd = parent[nd];
    }
  if(ans.size())
  {
    reverse(ans.begin(),ans.end());
    ans.push_back(n);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
    cout<<endl;
  }
  else cout<<"IMPOSSIBLE"<<endl;
}
