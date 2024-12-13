#include<bits/stdc++.h>
using namespace std;
#define ll long long
    vector<ll> twoSum(vector<ll>& nums, ll target) {
        vector<ll> v = nums;
        sort(v.begin(), v.end());
        ll n = nums.size();
        vector<ll> ans;
        int i = 0, j = n-1;
        while(i < j)
        {
            if(v[i]+v[j] < target) i++;
            else if(v[i]+v[j] > target) j--;
            else 
            {
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                break;
            }
        }
 
      if(ans.size()==0) return ans;
        j =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == ans[0]){
                ans[0] = i;
                j=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==j) continue;
            if(nums[i]==ans[1] )
            {
                ans[1] = i;
            }
        }
      sort(ans.begin(), ans.end());
        return ans;
    }
int main()
{
  ll n, target;
  cin>> n;
  cin >> target;
  vector<ll> nums(n,0);
  for(int i=0;i<n;i++)
    {
      ll num;
      cin>>num;
      nums[i]=num;
    }
  vector<ll> ans = twoSum(nums,target);
  if(ans.size()==0) cout<<"IMPOSSIBLE";
  else cout<<ans[0]+1<<" "<<ans[1]+1;
}