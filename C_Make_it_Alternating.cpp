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
ll mod=998244353;
ll nfac(int a){
    ll ans=1;
    while(a){
        ans=((ans%mod)*(a%mod))%mod;
        a--;
    }
    return ans;
}
void solve(){
   string s;
   cin>>s;
   char c='a';
   long long ans=1;
   int numbers=0;
   int idx=0;
   int blocks=0;
   while(idx<s.size()){
    
    if(s[idx]==c){
        ll length=1;
        while(idx<s.size() && s[idx]==c){
            length++;
            idx++;
            
        }
        numbers+=(length-1);
   
        ans=((ans%mod)*(length%mod))%mod;
        if(idx<s.size())c=s[idx];
        else break;
        blocks++;
        idx++;

    }else{
        blocks++;
        c=s[idx];
        idx++;
    }
   }
   ans=((ans%mod)*(nfac(s.size()-blocks)%mod))%mod;
   cout<<numbers<<" ";
   cout<<ans<<endl;
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