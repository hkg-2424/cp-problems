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
   if(n<=2 || n==4 ){
    cout<<-1<<endl;
    return;
   }
   int numberofthree=n/3;
   if(n%3==0){
    cout<<numberofthree<<" "<<0<<" "<<0<<endl;
   }else if(n%3==1){
    cout<<numberofthree-2<<" "<<0<<" "<<1<<endl;
   }else{
    cout<<numberofthree-1<<" "<<1<<" "<<0<<endl;
   }
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