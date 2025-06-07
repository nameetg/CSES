#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ordered_set<int> s;
    for(int i=1;i<=n;i++) s.insert(i);
    int idx=0;
    while(s.size()){
        idx=(idx+1)%s.size();
        auto it=s.find_by_order(idx);
        cout<<*it<<' ';
        s.erase(it);
    }
    return 0;
}