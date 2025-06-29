#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long q;
  cin>>q;
  while(q--)
    {
      unsigned long long n;
      cin>>n;
      unsigned long long count = 9;
      unsigned long long len = 1;
      while(n > count * len)
        {
          n -= count *len;
          len++;
          count *= 10;
        }
      unsigned long long f = pow(10,len-1);
      f += (n-1)/len;
      string s = to_string(f);
      unsigned long long ans = s[(n-1)%len]-'0';
      cout<<ans<<endl;
    }
}