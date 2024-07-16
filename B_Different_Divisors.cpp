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
vector<int>primearray;
vector<bool>number(1e5+1,true);
void seive(){
    number[0]=number[1]=true;
    for(ll i=2;i<number.size();i++){
        if(number[i]==true){
            primearray.pb(i);
            
            for(ll j=i*i;j<=number.size();j+=i){
                number[j]=false;
            }
        }
    }
}
void solve(){
   int n;
   cin>>n;
   ll ans=1;
   ans=ans*(*(lower_bound(all(primearray),ans+n)));
   ans=ans*(*(lower_bound(all(primearray),ans+n)));
   cout<< ans<<endl;
//    for(auto &i:primearray)cout<<i<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   seive();
   while(testcase--){
       solve();
   }
   return 0;
}