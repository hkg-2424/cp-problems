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
vector<int>graphs[int(3e5)+1];
ll power[int(3e5)+1];
ll sumodd=0;
ll sumeven=0;
void dfs(int node,int number,int parent){
    if(number==1){
        sumodd+=power[node];
    }else{
        sumeven+=power[node];
    }
    for(int i=0;i<graphs[node].size();i++){
        if(graphs[node][i]==parent)continue;
        dfs(graphs[node][i],-number,node);
    }
    return;
}
void solve(){
    for(int i=0;i<int(3e5)+1;i++)graphs[i].clear();
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        sum+=temp;
        power[i]=temp;
    }
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        graphs[x].push_back(y);
        graphs[y].push_back(x);
    }
    dfs(1,1,0);
    if(sumeven>sumodd){
        cout<<sum+sumodd<<endl;
    }else{
        cout<<sum+sumeven<<endl;
    }
    sumeven=0;
    sumodd=0;

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