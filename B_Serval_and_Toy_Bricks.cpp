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
   int n,m,h;
   cin>>n>>m>>h;
   vector<int> left(n),front(m);
   for(auto &i:front)cin>>i;
   for(auto &i:left)cin>>i;
   vector<vector<int>>topview(n,vector<int>(m,0));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>topview[i][j];
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(topview[i][j]==1){
            topview[i][j]=front[j];
        }
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(topview[i][j]>0){
            topview[i][j]=min(topview[i][j],left[i]);
        }
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<topview[i][j]<<" ";
    }
    cout<<endl;
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