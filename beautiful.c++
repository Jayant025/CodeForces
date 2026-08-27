#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    for(int i=y+1;i<=9999;i++){
        int n=i;
        set<int>s;
        while(n>0){
            s.insert(n%10);
            n/=10;
        }
        if(s.size()==4){
        cout<<i;
        return 0;
    }
}
    return 0;
}