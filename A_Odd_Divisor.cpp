#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   ll x;
   cin>>x;
   while((x>1) && ((x&1)==0)){
    x>>=1;
   }
   if(x==1)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
   return;
}
int main(){
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}