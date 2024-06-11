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
   char rank,suit;
   cin>>rank>>suit;
   bool ans=false;


   for(int i=0;i<5;i++){
    char rank1,suit1;
    cin>>rank1>>suit1;
    if(rank1==rank ||suit1==suit){
        ans=true;
    }
   }
   if(ans)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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