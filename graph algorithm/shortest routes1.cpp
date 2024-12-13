#include<bits/stdc++.h>
using namespace std;
int n,m;
unordered_map<int,vector<pair<int,int>>> g;
unordered_map<int,int> v;
priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long, long long>>>pq;
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
    {
      int a,b,c;
      cin>>a>>b>>c;
      g[a].push_back({b,c});
    }
  vector<long long> d(n+1, LLONG_MAX);
  d[1]=0;
  pq.push({0,1});
  while(!pq.empty())
    {
      long long node = pq.top().second;
      long long dist = pq.top().first;
      pq.pop();
      if(v[node]) continue;
      v[node]++;
      for(int i=0;i<g[node].size();i++)
        {
          long long nd = g[node][i].first;
          long long weight = g[node][i].second;
          if(dist+weight < d[nd])
          {
            d[nd] = dist + weight;
            pq.push({dist+weight, nd});
          }
        }
    }
  for(int i=1;i<=n;i++)
    {
      cout<<d[i]<<" ";
    }
}