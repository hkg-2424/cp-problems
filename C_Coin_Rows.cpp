#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define all(a) a.begin(),a.end()
#define pll pair <ll,ll>
#define F first
#define S second 
#define ld long double
#define sz(v) (int)v.size()
#define endl "\n"
// hii my name is hkg

void solve(){
   int m;
   cin>>m;
   vector<int>v1(m,0),v2(m,0);
   vector<ll>v1sum(m+1,0),v2sum(m+1,0);
   for(int i=0;i<m;i++){
    cin>>v1[i];
    v1sum[i+1]=v1sum[i]+v1[i];
   }
   for(int i=0;i<m;i++){
    cin>>v2[i];
    v2sum[i+1]=v2sum[i]+v2[i];
   }

   ll ans=INT_MAX;
   for(int i=1;i<=m;i++){
    ans=min(ans,max(v1sum[m]-v1sum[i],v2sum[i-1]-v2sum[0]));
   }
   cout<<ans<<endl;
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