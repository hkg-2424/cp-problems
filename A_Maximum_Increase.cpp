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
   int ans =1;
    int idx=0;
    while(idx<n-1){
        if(v[idx]<v[idx+1]){
            int length=1;
            while(idx<n-1 && v[idx]<v[idx+1]){
                idx++;
                length++;
            }
            ans=max(ans,length);
        }else idx++;
    }
   
     cout<<ans<<endl;
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