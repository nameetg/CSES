#include<bits/stdc++.h>
using namespace std;

 
int main(){

  int t;
  cin>>t;
  while(t--){
    long double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
  
    long double mp = (y2-y1)*(x3-x2) - (y3-y2)*(x2-x1);
    if(mp==0) cout<<"TOUCH"<<endl;
    else if(mp<0) cout<<"LEFT"<<endl;
    else cout<<"RIGHT"<<endl;
  }
  return 0;
}