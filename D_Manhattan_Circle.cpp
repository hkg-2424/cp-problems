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
   int n,m;
   cin>>n>>m;
   char matrix[n+1][m+1];
   pair<ll,ll>a={0,0},b={0,0};

   for(int i=1;i<=n;i++){
    for(int  j=1;j<=m;j++){
        cin>>matrix[i][j];
        if(matrix[i][j]=='#'&& a.first==0){
            a.first=i;
            a.second=j;
        }
    }
   }
   int  i=a.first,j=a.second;
   b.second=j;
   while(matrix[i][j]=='#'){
    b.first=i;
    i++;
   }
   cout<<(a.first+b.first)/2<<" "<<b.second<<endl;
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