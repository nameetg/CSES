#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,              
    rb_tree_tag,
    tree_order_statistics_node_update
>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ordered_set<pair<int,int>> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert({i,a});
    }
    while(n--){
        int x;
        cin>>x;
        x--;
        auto it=s.find_by_order(x);
        cout<<it->second<<' ';
        s.erase(it);
    }
    return 0;
}