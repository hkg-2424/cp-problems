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
int power2(ll num){
 int ans=0;
 while(!(num&(1<<ans))){
    ans++;
 }
 return ans;
}
void solve(){
   int n,q;
   cin>>n>>q;
   vector<pair<ll,int>>vp(n);
   vector<int>x;
   for(int i=0;i<n;i++){
    cin>>vp[i].first;
    vp[i].second=power2(vp[i].first);
   }
   int maxpower=INT_MIN;
   for(int i=0;i<n;i++)maxpower=max(maxpower,vp[i].second);

   for(int i=0;i<q;i++){
    int temp;
    cin>>temp;
    if(x.size() && temp<x.back())x.push_back(temp);
    else if(x.size()==0 && maxpower>=temp)x.push_back(temp);

   }

   for(int i=0;i<x.size();i++){
    bool nothingdone=true;
    for(int j=0;j<vp.size();j++){
        if(vp[j].second>=x[i]){
            nothingdone=false;
            vp[j].first+=(1LL<<(x[i]-1));
            vp[j].second=x[i]-1;
        }
    }
    if(nothingdone){
        break;
    }
   }
   for(auto &i:vp)cout<<i.first<<" ";
   cout<<endl;


// for debugging;
// for(int i=0;i<n;i++)cout<<vp[i].second<<" ";
// cout<<endl;
// cout<<maxpower<<endl;

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