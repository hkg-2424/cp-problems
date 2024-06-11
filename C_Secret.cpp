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
   int n,k;
   cin>>n>>k;
   if(n<3*k){
    cout<<-1<<endl;
    return;
   }

   for(int i=1;i<=((n/k)-1)*k;i++){
    if((i%k)!=0)cout<<(i%k)<<" ";
    else cout<<k<<" ";
   }
   for(int i=((n/k)-1)*k+1;i<=((n/k)*k);i++){
    cout<<(i%k+1)<<" ";
   }
   for(int i=((n/k)*k)+1;i<=n;i++){
    if((i%k)!=0)cout<<(i%k)<<" ";
    else cout<<k<<" ";
   }
   cout<<endl;
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