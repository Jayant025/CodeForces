#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a="hello";
    int i=0,j=0;
    int cnt=0;
    while(i<s.size() && j<a.size()){
        if(s[i]==a[j]){
            cnt++;
            i++;
            j++;
        }
        else if(s[i]!=a[j]){
            i++;
        }
    }
    if(cnt==a.size()){
    cout<<"YES";
    return 0;
    }
    cout<<"NO";
}