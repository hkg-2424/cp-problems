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
   char c;
   cin>>n>>m>>c;
   char pos[n][m];
   vector<pair<int,int>>preslocation;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>pos[i][j];
        if(pos[i][j]==c){
            preslocation.pb(make_pair(i,j));
        }
    }
   }

   int ans=0;
   set<char>deputies;
   for(int i=0;i<preslocation.size();i++){
    if(preslocation[i].F+1<n){
        if(pos[preslocation[i].F+1][preslocation[i].S]!=c){
            deputies.insert(pos[preslocation[i].F+1][preslocation[i].S]);
        }
    }
    if(preslocation[i].F-1>=0){
        if(pos[preslocation[i].F-1][preslocation[i].S]!=c){
            deputies.insert(pos[preslocation[i].F-1][preslocation[i].S]);
        }
    }
    if(preslocation[i].S+1<m){
        if(pos[preslocation[i].F][preslocation[i].S+1]!=c){
            deputies.insert(pos[preslocation[i].F][preslocation[i].S+1]);
        }
    }
    if(preslocation[i].S-1>=0){
        if(pos[preslocation[i].F][preslocation[i].S-1]!=c){
            deputies.insert(pos[preslocation[i].F][preslocation[i].S-1]);
        }
    }
    
   }
   ans=deputies.size();
   if(deputies.find('.')!=deputies.end())ans--;
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