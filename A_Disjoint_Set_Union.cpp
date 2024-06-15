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
 vector<vector<int>> adjacencylist(200000);
 bool isvisited[200000];
 bool isconnected(int a,int b){
    if(isvisited[a])return false;
    isvisited[a]=true;
    for(auto &i:adjacencylist[a]){
        if(isvisited[i])continue;
        if(i==b)return true;
        else if(isconnected(i,b))return true;
    }
    return false;
 }

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
//    ll testcase=1;
// //    cin>>testcase;
//    while(testcase--){
//        solve();
//    }
    int n,q;
   cin>>n>>q;
  
   for(int i=0;i<q;i++){
    int typeofoperation;
    int u,v;
    cin>>typeofoperation>>u>>v;
    
    if(typeofoperation==1){
        if(u==v){
            cout<<1<<endl;
            continue;
        }
        memset(isvisited,false,n+1);
        
        if(isconnected(u,v)) {
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }else{
        adjacencylist[u].pb(v);
        adjacencylist[v].pb(u);
    }
   }
   return 0;
}