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

bool isanswer(vector<int>&v,int idx,int x,int y){
    for(int i=1;i<=x;i++){
        if(idx-i<0)break;
        if(v[idx]>=v[idx-i])return false;
    }
    for(int i=1;i<=y;i++){
        if(idx+i==v.size())return true;
        if(v[idx]>=v[idx+i])return false;
    }
    return true;
}
void solve(){
   int n,x,y;
   cin>>n>>x>>y;
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   for(int i=0;i<n;i++){
    if(isanswer(v,i,x,y)){
        cout<<i+1<<endl;
        return;
    }
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