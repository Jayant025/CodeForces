#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int cnt1=0,cnt2=0,cnt3=0;
    // for(auto c:s){
    //     if(c=='1') cnt1++;
    //     else if(c=='2') cnt2++;
    //     else if(c=='3') cnt3++;
    // }
    // bool first=true;
    // while(cnt1--){
    //     if(!first) cout<<"+";
    //     cout<<"1";
    //     first=false;
    // }
    // while(cnt2--){
    //     if(!first) cout<<"+";
    //     cout<<"2";
    //     first=false;
    // }
    // while(cnt3--){
    //     if(!first) cout<<"+";
    //     cout<<"3";
    //     first=false;
    // }
    // return 0;
    vector<char>v;
    for(auto c:s){
        if(c!='+')
         v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i>0) cout<<"+";
        cout<<v[i];
    }
    return 0;
 }