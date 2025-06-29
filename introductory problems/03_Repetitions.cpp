#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n = s.length();
  int i=0,j=0;
  int ans = 0;
  while(j<n)
    {
      while(i<j && s[i] != s[j]){
        i++;
      }
      ans = max(ans,(j-i+1));
      j++;
    }
  cout<<ans;
}