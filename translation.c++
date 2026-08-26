#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i=0,j=t.size()-1;
     if (s.size() != t.size()) {
        cout << "NO";
        return 0;
    }
    while(i<s.size()&&j>=0){
        if(s[i]==t[j]){
            i++;
            j--;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}