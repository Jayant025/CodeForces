#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=k){
            cnt++;
        }
        else{
            cnt+=2;
        }
    }
    cout<<cnt;
    return 0;
}