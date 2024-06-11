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
   int low=1;
   int high;
   int n;
   cin>>n;
   
   high=n;
   ll ans=1;
   while(low<=high){
    ll mid=(low+high)/2;
    
    ll value=((mid+1)*(mid)*(mid+2))/6;
    if(value>n){
        high=mid-1;
    }else{
        ans=mid;
        low=mid+1;
    }
    // debug(mid);
    // debug(low);
    // debug(high);
    

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