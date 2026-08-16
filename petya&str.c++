#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    string m;
    cin>>m;
    for(int i=0;i<n.size();i++){
    char x=tolower(n[i]);
    char y=tolower(m[i]);
    if(x>y){ 
        cout<<1;
        return 0;
    }
    if(x<y){ 
        cout<<-1;
        return 0;
    }
}
cout<<0;
return 0;
}