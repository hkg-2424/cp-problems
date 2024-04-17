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
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   if(v[0]!=v.back()){
    cout<<"NO"<<endl;
    return;
   }
   bool ans=true;
   for(int i=1;i<n-1;i++){
    if(v[i]<v[0]){
        ans=false;
        break;
    }
   }
   if(ans)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

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