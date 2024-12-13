#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lengthOfLIS(vector<int>& nums) {
    set<int> s;
    s.insert(nums[0]);
    for(int i = 1; i < nums.size(); i++) {
        auto idx = s.lower_bound(nums[i]);
        if (idx == s.end()) {
            s.insert(nums[i]);
        } else {
            s.erase(idx);
            s.insert(nums[i]);
        }
    }
    return s.size();
}
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
      v[i] = temp;
    }
  int ans = lengthOfLIS(v);
  cout<<ans;
}
