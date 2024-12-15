#include<bits/stdc++.h>
using namespace std;

void solve(int n, int f, int s, int t){
  if(n==1) {
    cout<<f<<" "<<t<<endl;
    return;
  }

  solve(n-1,f,t,s);
  cout<<f<<" "<<t<<endl;
  solve(n-1,s,f,t);
}

int main(){
    int n;
    cin>>n;
    cout<< pow(2,n) -1<<endl;
    int f=1,s=2,t=3;
    solve(n,1,2,3);
    
}