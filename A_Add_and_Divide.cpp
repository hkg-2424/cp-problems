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

ll steps(ll a,ll i){
   int cnt=0;
   while(a){
      a/=i;
      cnt++;
   }
   return cnt;
}
void solve(){
   ll a,b;
   cin>>a>>b;
   
   ll noofsteps=0;
   int add=0;
   if(b==1){
      b++;
      add=1;
   }
   noofsteps+=(steps(a,b));
   for(ll i=b+1;true;i++){
      if(i-b+steps(a,i)>noofsteps)break;
      else noofsteps=(i-b+steps(a,i));
   }
   cout<<noofsteps+add<<endl;

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