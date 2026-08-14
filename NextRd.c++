#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
     for(int i=0;i<n;i++){
     if(ans[i]>=ans[k-1]&&ans[i]>0)
       cnt++;
     }
     cout<<cnt;
}
