#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   ll a,b;
   cin>>a>>b;
   if(a==b){
      cout<<"0 0"<<endl;
      return;
      }
   ll g=abs(a-b);
   ll m=min(a%g,g-a%g);
   cout<<g<<" "<<m<<endl;
   
   
   
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