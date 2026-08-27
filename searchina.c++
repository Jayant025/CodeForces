#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        if(p==0){
            continue;
        }
        else{
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}