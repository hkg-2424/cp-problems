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
   vector<pair<int,int>>vp(n);
   for(auto &i:vp){
    cin>>i.first>>i.second;
   }
   sort(all(vp));
   bool alex=false;
   for(int i=0;i<n-1;i++){
    if(vp[i].F<vp[i+1].F  && vp[i].S>vp[i+1].S){
        alex=true;
        break;
    }
   }
   if(alex)cout<<"Happy Alex"<<endl;
   else cout<<"Poor Alex"<<endl;
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