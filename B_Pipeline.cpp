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
   if(n==1){
    cout<<0<<endl;
    return;
   }
   if(n<=k){
    cout<<1<<endl;
    return;
   }
   if(n>(1+((k)*(k-1)/2))){
    cout<<-1<<endl;
    return;
   }
   ll ans=0;
   ll start=1;//  minimum number of splitters since one splitter is used;
   ll end=k-2;// remaining splitters;
   while(start<=end){
    ll mid=(start+end)>>1;
    ll expression=(mid*(2*k-(mid+1))/2)+(k-mid);
    if(expression>=n){
        ans=mid;
        end=mid-1;
    }else{
        start=mid+1;
    }
   }
   cout<<ans+1<<endl;

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