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
   int n;
   cin>>n;
   int setbit=0;
   for(int i=0;i<32;i++){
    if(((n-1)&(1<<i))){
        setbit=i;
    }
   }
   for(int i=1;i<=n-1;i++){
    if(i==(1<<setbit)){
        cout<<0<<" ";
    }
    cout<<i<<" ";
   }
   cout<<endl;
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