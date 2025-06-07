#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n),res(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> f;
    stack<int> s;
    for(int i=0;i<n;i++){
        while(s.size()&&a[s.top()]>=a[i]) s.pop();
        if(!s.size()) res[i]=0;
        else res[i]=s.top()+1;
        s.push(i);
    }
    for(int e:res) cout<<e<<' ';
    return 0;
}