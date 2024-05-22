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
   vector<int>v(4);
   for(auto &i:v)cin>>i;
   sort(all(v));
   if((v[0]+v[1]>=v[2])||(v[1]+v[2]>=v[3])){
    if((v[0]+v[1]>v[2])||(v[1]+v[2]>v[3])){
    cout<<"TRIANGLE"<<endl;
    }else cout<<"SEGMENT";
   }else{
    cout<<"IMPOSSIBLE"<<endl;
   }
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