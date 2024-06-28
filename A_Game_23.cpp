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
   int n,m;
   cin>>n>>m;
   if(m%n){
    cout<<-1<<endl;
    return;
   }
   int multiplyfactor=m/n;
   int moves=0;
   while((multiplyfactor&1)==0 && multiplyfactor!=1){
    multiplyfactor>>=1;
    moves++;

   }
   while(multiplyfactor%3==0){
    multiplyfactor/=3;
    moves++;
   }
   if(multiplyfactor!=1)cout<<-1<<endl;
   else cout<<moves<<endl;
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