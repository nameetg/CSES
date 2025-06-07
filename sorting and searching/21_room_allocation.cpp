#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<tuple<int,int,int>> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]={x,y,i};
    }
    sort(a.begin(),a.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    int nid=0;
    vector<int> res(n);
    for(auto &[x,y,idx]:a){
        if(q.size()&&q.top().first<x){
            int id=q.top().second;
            q.pop();
            res[idx]=id;
            q.push({y,id});
        }else{
            nid++;
            res[idx]=nid;
            q.push({y,nid});
        }
    }
    cout<<nid<<'\n';
    for(int e:res) cout<<e<<' ';
    return 0;
}
