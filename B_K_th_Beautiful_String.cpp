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
ll returnidx(ll n,ll k){
    ll low=1;
    ll high=n-1;
    ll idx;
    for(;low<=high;){
        ll mid=(low+high)/2;
        ll expr=(mid)*(mid+1)/2;
        if(expr<=k){
            idx=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return idx;
}

void solve(){
   ll n,k;
   cin>>n>>k;
   ll idx=returnidx(n,k);
   if(idx*(idx+1)/2==k){
    for(int i=1;i<=n;i++){
        if(i==(n-idx) || i==(n-idx+1)){
            cout<<'b';
            
        }else cout<<'a';
    }
    cout<<endl;
    return;
   }else{
    ll lastidx=k-idx*(idx+1)/2;
    idx++;
    for(int i=1;i<=n;i++){
        if(i==(n-idx) || i==(n-lastidx+1)){
            cout<<'b';
        }else cout<<'a';
        
    }
    cout<<endl;
   }
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