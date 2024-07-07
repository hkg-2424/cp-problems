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
   ll n,k;
   cin>>n>>k;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++){
    cin>>v[i];
   }
   int ans=1;
   for(int i=1;i<=n;i++){
    ll required=1LL*i*(i+1)/2;
    if(required>k)break;
    ans=i;
   }
   ll idx=k-ans*1LL*(ans+1)/2;
   if(idx==0){
    cout<<v[ans];
   }else{
    cout<<v[idx];
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