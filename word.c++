#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int cnt1=0,cnt2=0;
  string ans="";
  for(int i=0;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z'){
    cnt1++;
  }
   else{
    cnt2++;
  }
  }
  for(auto c:s){
  if(cnt1>cnt2)
  ans+=toupper(c);
else
  ans+=tolower(c);
}
cout<<ans;
return 0;
}