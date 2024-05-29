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
   vector<int>v(n,0);
   for(auto &i:v){
    cin>>i;
   }
   if(v[0]!=n){
    cout<<"NO"<<endl;
    return;
   }
   vector<int>vreverse;copy(v.begin(), v.end(), back_inserter(vreverse));
   reverse(all(vreverse));
   vector<int>vgenerated;
   for(int i=n;i>=1;i--){
    vgenerated.push_back(n-(lower_bound(all(vreverse),i)-vreverse.begin()));
   }
   for(int i=0;i<n;i++){
    if(vgenerated[i]!=vreverse[i]){
        cout<<"NO"<<endl;
        return ;
    }
   }
   cout<<"YES"<<endl;
   return;


//    return;
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