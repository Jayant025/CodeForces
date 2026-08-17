#include<bits/stdc++.h>
using namespace std;
int main(){
    string user;
    cin>>user;
    unordered_map<char,int>mp;
    for(int i=0;i<user.size();i++){
        mp[user[i]]++;
    }
    if(mp.size()%2==0){
    cout<<"CHAT WITH HER!";
    }
    else{
    cout<<"IGNORE HIM!";
    } 
}