#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int len=0;
 int i=0;
 while(i<s.size()){
 int cnt=0;
    while(i<s.size() && s[i]=='0'){
    cnt++;
    i++;
    }
    if(cnt>=7){
    cout<<"YES";
    return 0;
    }
    cnt=0;
    while(i<s.size() && s[i]=='1'){
    cnt++;
    i++;
    }
    if(cnt>=7){
    cout<<"YES";
    return 0;
    }
    cnt=0;
    }
 cout<<"NO";
 return 0;
}