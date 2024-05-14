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
ll dfs(vector<vector<int>>& connections,vector<int>&visited,vector<bool>catthere,int currentindex,int catsinrow,int maxallowable){
    if(visited[currentindex]==1)return 0;
    visited[currentindex]=1;

    if(catthere[currentindex]==true){
        catsinrow++;
    }else catsinrow=0;

    if(catsinrow>maxallowable)return 0;
    if((currentindex!=1) && (connections[currentindex].size()==1))return 1;
    ll ans=0;
    for(int i=0;i<connections[currentindex].size();i++){
        ans+=dfs(connections,visited,catthere,connections[currentindex][i],catsinrow,maxallowable);
    }
    return ans;

}
void solve(){
   int n,m;
   cin>>n>>m;
   vector<bool>catthere(n+1,false);
   for(int i=1;i<=n;i++){
    int temp;
    cin>>temp;
    if(temp==1)catthere[i]=true;
   }
   vector<vector<int>>connections(n+1);
   for(int i=0;i<n-1;i++){
    int n1,n2;
    cin>>n1>>n2;
    connections[n1].push_back(n2);
    connections[n2].push_back(n1);
   }
    vector<int> visited(n+1,0);
    ll ans=dfs(connections,visited,catthere,1,0,m);
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