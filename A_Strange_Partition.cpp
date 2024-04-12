#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   ll  n,x;
   cin>>n>>x;
   ll maxans=0,sum=0;
   for(ll i=0;i<n;i++){
    ll temp;
    cin>>temp;
    sum+=temp;
    maxans+=(temp/x);
    if(temp%x)maxans++;
   }
   ll minans=sum/x;
   if(sum%x)minans++;
   cout<<minans<<" "<<maxans<<endl;
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