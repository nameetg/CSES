#include<bits/stdc++.h>
using namespace std;

int ans = 0;
void noOfFives(int num)
{
  while(num && num%5==0)
    {
      ans++;
      num/=5;
    }
}
int main()
{
  int n;
  cin>>n;
  // int ans = n/5;
  int temp = 5;
  while(temp <= n)
    {
      noOfFives(temp);
      temp += 5;
    }
  cout<<ans;
}