#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        if(n==m)
        {
            long long ans = n*n - (n-1);
            cout<<ans;
        }
        else if(n>m)
        {
            long long ans = n*n - (n-1);
            if(n%2)
            {
                ans = ans - (n-m);
            }
            else {
                ans = ans + (n-m);
            }
            cout<<ans;
        }
        else{
            long long ans = m*m -(m-1);
            if(m%2)
            {
                ans = ans + (m-n);
            }
            else{
                ans = ans - (m-n);
            }
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}
