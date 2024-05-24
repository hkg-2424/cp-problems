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
   char square[8][8];
   for(int i=0;i<8;i++)for(int j=0;j<8;j++)cin>>square[i][j];
   vector<int>v;
   for(int i=0;i<8;i++)if(square[i][i]=='B')v.push_back(i);
    int ans=0;
   for(int i=0;i<v.size();i++){
    bool is=true;
    for(int j=0;j<8;j++){
        if(square[v[i]][j]=='W'){
            is=false;
            break;
        }
    }
    if(is)ans++;
   }
    for(int i=0;i<v.size();i++){
    bool is=true;
    for(int j=0;j<8;j++){
        if(square[j][v[i]]=='W'){
            is=false;
            break;
        }
    }
    if(is)ans++;
   }
   if(ans==16)cout<<8<<endl;
    else cout<<ans<<endl;
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