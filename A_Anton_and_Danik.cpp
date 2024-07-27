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
   string s;
   cin>>n;
   cin>>s;
   int anton=0;
   for(int i=0;i<n;i++){
    if(s[i]=='A')anton++;
   }

   if(anton>n-anton)cout<<"Anton";
   else if(anton*2==n)cout<<"Friendship";
   else cout<<"Danik";
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