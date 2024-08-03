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
bool isvalid(int a,int d12,int d13){
    return ((a-d12-d13)>=0)||((a-d12-d13)&1==0);
}
void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b+c)&1){
    cout<<-1<<endl;
    return;
   }
   int ans=0;
   int numberofmatches=(a+b+c)/2;
   for(int i=0;i<=min(numberofmatches,min(a,b));i++){
    for(int j=0;j<=min(numberofmatches,min(a,c));j++){
        for(int k=0;k<=min(numberofmatches,min(b,c));k++){
            if(isvalid(a,i,j) && (isvalid(b,i,k)) && (isvalid(c,j,k))){
                // cout<<i<<j<<k<<endl;
                ans=max(ans,i+j+k);
            }
        }
    }
   }
   cout<<ans<<endl;
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