#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int cnt=0;
    while(n<=m){
        n*=3;
        m*=2;
        cnt++;
    }
    if(n>m){
        cout<<cnt;
        return 0;
    }
    return 0;
}