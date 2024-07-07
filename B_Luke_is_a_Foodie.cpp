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
   ll n,x;
   cin>>n>>x;
   vector<pair<ll,ll>>vp;
   int a;
   cin>>a;
   ll vkilowest=a-x;
   ll vkihighest=a+x;
   vp.push_back(make_pair(vkilowest,vkihighest));
   for(int i=1;i<n;i++){
    ll temp;
    cin>>temp;
    ll tempkilowest=temp-x;
    ll tempkihighest=temp+x;
    if(vp.back().first<=tempkilowest && vp.back().second>=tempkilowest){
        vp.back().first=max(vp.back().first,tempkilowest);
    }else if(vp.back().first<=tempkihighest && vp.back().second>=tempkihighest){
        vp.back().second=min(vp.back().second,tempkihighest);
    }else if(tempkihighest>=vp.back().second && tempkilowest<=vp.back().first){
        continue;
    }
    else{
        vp.pb(make_pair(tempkilowest,tempkihighest));
    }
   }
   cout<<vp.size()-1<<endl;
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