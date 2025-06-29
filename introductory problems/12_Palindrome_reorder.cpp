#include<bits/stdc++.h>
using namespace std;

string solve(string s){
  if(s.length()==1) return s;
  unordered_map<char,int> f;
  for(int i=0;i<s.length();i++) f[s[i]]++;

  if(s.length()%2){
    bool flag =false;
    int st=0, en=s.length()-1;
    for(auto it : f){
      if(it.second%2 && flag) return "NO SOLUTION";
      else if(it.second%2){
        flag =true;
        s[s.length()/2] = it.first;
        int hl = it.second/2;
        for(int i=0;i<hl;i++){
          s[st]=it.first;
          s[en]=it.first;
          st++;en--;
        }
      }else{
        int hl = it.second/2;
        for(int i=0;i<hl;i++){
          s[st]=it.first;
          s[en]=it.first;
          st++;en--;
        }
      }
    }
    return s;
  }else{
    int st=0, en=s.length()-1;
    for(auto it:f){
      if(it.second%2) return "NO SOLUTION";
      int hl = it.second/2;
      for(int i=0;i<hl;i++){
        s[st]=it.first;
        s[en]=it.first;
        st++;en--;
      }
    }
    return s;
  }
  return "";
}

int main(){
  string s;
  cin>>s;

  cout<<solve(s)<<endl;
}