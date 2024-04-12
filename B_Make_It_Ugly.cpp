#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   
   vector<int> notsame;
   for(int i=0;i<n;i++){
    if(v[i]!=v[0])notsame.push_back(i);
   }
   if(notsame.size()==0){
    cout<<-1<<endl;
    return;
   }
//    for(auto &i:notsame)cout<<i<<endl;
   int notsameaddjacent=INT_MAX;
   for(int i=0;i<notsame.size()-1;i++){
    if((notsame[i+1]-notsame[i]-1)<notsameaddjacent)notsameaddjacent=notsame[i+1]-notsame[i]-1;
   }
   cout<<min(min(notsameaddjacent,notsame[0]-0),n-1-notsame.back())<<endl;
   

   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}