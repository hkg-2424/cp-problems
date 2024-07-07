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
   ll n,k,q;
   cin>>n>>k>>q;
   vector<ll>v(n);
   for(auto &i:v)cin>>i;
   vector<ll>lengthofwindows;
   ll start=0;
   ll lengthofwindow=0;
   while(start<n){
        if(v[start]<=q){
            lengthofwindow++;
        }else{
            if(lengthofwindow>=k)lengthofwindows.pb(lengthofwindow);
            lengthofwindow=0;
        }
        start++;
   }
   if(lengthofwindow>=k)lengthofwindows.pb(lengthofwindow);
//    for(auto &i:lengthofwindows)cout<<i<<endl;
    ll ans=0;
    for(auto &i:lengthofwindows){
        ans+=(i-k+1)*(2+i-k)/2;
    }
    cout<<ans<<endl;
   return;
}
void solve2(){
    ll n,k,q;
   cin>>n>>k>>q;
   
   vector<ll>lengthofwindows;
   ll lengthofwindow=0;
   for(int i=0;i<n;i++){
    ll temp;
    cin>>temp;
    if(temp<=q){
        lengthofwindow++;
    }else{
        if(lengthofwindow>=k)lengthofwindows.pb(lengthofwindow);
        lengthofwindow=0;
    }
   }
   
   
   if(lengthofwindow>=k)lengthofwindows.pb(lengthofwindow);
//    for(auto &i:lengthofwindows)cout<<i<<endl;
    ll ans=0;
    for(auto &i:lengthofwindows){
        ans+=(i-k+1)*(2+i-k)/2;
    }
    cout<<ans<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve2();
   }
   return 0;
}