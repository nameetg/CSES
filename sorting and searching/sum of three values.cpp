#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> threeSum(vector<ll>& nums, ll target) {
  vector<ll> v = nums;
    sort(v.begin(), v.end());
    vector<ll> ans;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && v[i] == v[i-1]) continue;
        int j=i+1, k = n-1;
        while(j<k)
        {
            ll sum = v[i]+v[j]+v[k];
            if(sum < target) j++;
            else if(sum > target) k--;
            else 
            {
                ans.push_back(v[i]);
              ans.push_back(v[j]);
              ans.push_back(v[k]);
              break;
            }
        }
    }
  if(ans.size()==0) return ans;
   int j=0;
  int k=0;
  for(int i=0;i<n;i++)
    {
      if(ans[0] == nums[i])
      {
        ans[0] = i;
        j = i;
        break;
      }
    }
  for(int i=0;i<n;i++)
    {
      if(i==j) continue;
      if(ans[1] == nums[i]) 
      {
        ans[1] = i;
        k = i;
        break;
      }
    }
 for(int i=0;i<n;i++)
   {
     if(i==j || i==k) continue;
     if(nums[i] == ans[2])
     {
       ans[2] =i;
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
  vector<ll> ans = threeSum(nums,target);
  if(ans.size()==0) cout<<"IMPOSSIBLE";
  else cout<<ans[0]+1<<" "<<ans[1]+1<<" "<<ans[2]+1;
}