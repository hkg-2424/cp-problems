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
   int n ,vb,vs;
   cin>>n>>vb>>vs;
   vector<int>v(n+1,0);
   for(int i=1;i<=n;i++)cin>>v[i];
   int xu,yu;
   cin>>xu>>yu;
   int idx=lower_bound(v.begin(),v.end(),xu)-v.begin();
   if(v[idx]==xu){
    cout<<idx<<endl;
    return;
   }
   int secondidx=idx-1;
   float didx=(sqrt(yu*yu+(xu-v[idx])*(xu-v[idx]))/vs)+((v[idx]-v[secondidx])/vb);
   float dsidx=(sqrt(yu*yu+(xu-v[secondidx])*(xu-v[secondidx]))/vs)  ;
   if(dsidx>didx)cout<<idx<<endl;
   else if(dsidx<didx)cout<<secondidx<<endl;
   else{
    if(sqrt(yu*yu+(xu-v[idx])*(xu-v[idx]))>sqrt(yu*yu+(xu-v[secondidx])*(xu-v[secondidx])))cout<<secondidx<<endl;
    else cout<<idx<<endl;
   }
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