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
ll bs(ll diff[],ll n, ll value){
    ll low=0;
    ll high=n;
    ll mid;
    ll ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(diff[mid]<=value){
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;
    }
    return ans;
    
}

void solve(){
   ll n,q;
   cin>>n>>q;
   ll a[n+1]={0};
   ll height[n+1]={0};
//    cout<<"hellow"<<endl;

   
   for(int i=1;i<=n;i++){
    ll temp;
    cin>>temp;
    a[i]=max(temp,a[i-1]);
    height[i]=temp+height[i-1];
   }
//    for(auto &i:a)cout<<i<<" ";
//    cout<<endl;
//    for(auto &i:height)cout<<i<<" ";
//    cout<<endl;

   for(int i=0;i<q;i++){
    ll k;
    cin>>k;
    // debug(k);
    ll idx=bs(a,n,k);
    cout<<height[idx]<<" ";
   }
   cout<<endl;
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