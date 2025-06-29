#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long n,x;
  cin>>n>>x;
  long long M=1e9+7;
  vector<long long> c(n);
  for(size_t i=0;i<n;i++) cin>>c[i];
  vector<long long> dp(x + 1, 0);
    dp[0] = 1;  // Base case: 1 way to make sum 0.

    for (long long i = 0; i < n; i++) {
        for (long long t = c[i]; t <= x; t++) {
            dp[t] = (dp[t] + dp[t - c[i]]) % M;
        }
    }

    cout << dp[x] << endl;
}
