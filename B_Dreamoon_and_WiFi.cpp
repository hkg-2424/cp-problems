#include<bits/stdc++.h>
#include<iomanip>
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
ll fac(int n){
    if(n==0)return 1;
    ll ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    // cout<<ans<<endl;
    return ans;
}

void solve(){
   string sent,got;
   cin>>sent>>got;
   
   int positive=0;
   int negative=0;
   for(int i=0;i<sent.size();i++){
    if(sent[i]=='+')positive++;
    else negative++;
   }
   int doubt=0;
   for(int i=0;i<got.size();i++){
    if(got[i]=='?')doubt++;
    else if(got[i]=='+')positive--;
    else negative--;
   }
   if(abs(positive)+abs(negative)>doubt){
    // cout<<1<<endl;
    double ans=0.0;
    cout<<setprecision(9);
    cout<<ans<<endl;
   }else{
    double ans=1.0;
    ans=(ans*fac(doubt))/(fac(doubt-negative)*fac(negative));
    
    ll total=(1<<doubt);
    ans=(ans/total);
    // cout<<ans<<endl;
    // cout<<2<<endl;
    cout<<setprecision(9);
    cout<<ans<<endl;
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