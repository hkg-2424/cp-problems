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

void solve(){
   int n;
   cin>>n;
   int operations=n+n/2;
   ll value=n*n*(n+1)/2 + n*n*n/8;
   cout<<value<<" "<<operations<<endl;


   for(int i=0;i<n;i++){
    cout<<1<<" "<<i+1<<" ";;
    for(int j=0;j<n;j++)cout<<j+1<<" ";
    cout<<endl;
   }
   for(int i=0;i<n/2;i++){
    cout<<2<<" "<<i+1<<" ";;
    for(int j=0;j<n;j++)cout<<j+1<<" ";
    cout<<endl;
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