#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string color;
   cin>>color;
   int cnt=0;
   for(int i=0;i<n-1;i++){
    if(color[i]==color[i+1])
    cnt++;
   }
   cout<<cnt;
   return 0;
}