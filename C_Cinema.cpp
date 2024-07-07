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
   ll n;
   cin>>n;
   map<ll,ll>mp;
   for(int i=0;i<n;i++){
    ll temp;
    cin>>temp;
    mp[temp]++;
   }
   ll ans=1;
   ll m;
   cin>>m;
   vector<pair<int,int>>vp(m);
   for(int i=0;i<m;i++){
    cin>>vp[i].first;
   }
   for(int i=0;i<m;i++){
    cin>>vp[i].second;
   }
   ll pleased=0,almostsatisfied=0;
   for(int i=0;i<m;i++){
 
    if(mp[vp[i].first]>pleased){
        pleased=mp[vp[i].first];
        almostsatisfied=mp[vp[i].second];
        ans=i+1;
    }else if((mp[vp[i].first]==pleased)&&(almostsatisfied<mp[vp[i].second])){
        almostsatisfied=mp[vp[i].second];
        ans=i+1;
    }
   }
   cout<<ans<<endl;

   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}