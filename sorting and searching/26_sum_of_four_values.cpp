#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

vector<int> f(vector<int> &a, int target){
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1&&a[j]==a[j-1]) continue;
            int s=j+1,e=n-1;
            while(s<e){
                i64 sum=a[i];
                sum+=a[j];
                sum+=a[s];
                sum+=a[e];
                if(sum==target){
                    return {a[i],a[j],a[s],a[e]};
                }
                else if(sum>target) e--;
                else s++;
            }
        }
    }
    return {};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    map<int,vector<int>> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]].push_back(i+1);
    }
    vector<int> res=f(a,k);
    if(res.size()==0) cout<<"IMPOSSIBLE";
    else{
        for(int e:res){
            int i=0;
            while(i<m[e].size()&&m[e][i]==-1) i++;
            cout<<m[e][i]<<' ';
            m[e][i]=-1;
        }
    }
    return 0;
}