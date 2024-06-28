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
   vector<string>ans;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    x=abs(x);
    if((y-x)>=-(x+1)){
        ans.push_back("YES");
    }else{
        ans.push_back("NO");
    }
   }
   for(auto &i:ans)cout<<i<<endl;
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