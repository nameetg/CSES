#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
 
  ll sum =0;
  ll mx = INT_MIN;
  for(int i=n-1;i>=0;i--)
    {
      sum += v[i];
      mx = max(mx, sum);
      if(sum <0 ) sum = 0;
    }
  cout<<mx;
}