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
bool fair(ll n){
    ll temp=n;
    while(temp){
        ll div=temp%10;
        temp/=10;
        if(div==0)continue;
        if(n%div)return false;
    }
    return true;
}
void solve(){
   ll n;
   cin>>n;
    for(ll i=n;true;i++){
        if(fair(i)){
            cout<<i<<endl;
            return;
        }
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