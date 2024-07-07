#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long  long
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
   vector<ll>a(n),b(n);
   for(auto&i:a)cin>>i;
   for(auto&i:b)cin>>i;
   ll ans;
   ll start;
   ll end=0;
   for(ll i=0;i<n;i++){
    
    end=max(end,(b[i]+k)/a[i]);
   }
   ans=0;
   start=0;
   while(start<=end){
    ll mid=(start+end)>>1;
    ll totalrequired=0;
    for(int i=0;i<n;i++){
        if((mid*a[i])>b[i])totalrequired+=((mid*a[i])-b[i]);
    }
    if(totalrequired>k){
        end=mid-1;
    }else{
        ans=mid;
        start=mid+1;
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