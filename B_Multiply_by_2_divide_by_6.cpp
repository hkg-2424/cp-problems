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
   int div2=0,div3=0;
   while((n%3==0)){
    div3++;
    n=n/3;
   }
   while((n%2==0)){
    div2++;
    n=n/2;
   }
   if(n==1){
    if(div2>div3)cout<<-1<<endl;
    else cout<< 2*div3-div2<<endl;
   }else cout<<-1<<endl;
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