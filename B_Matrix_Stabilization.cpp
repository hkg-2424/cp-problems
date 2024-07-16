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
int n,m;
bool isvalid(int x,int y){
    return (x>=0)&&(x<m)&&(y>=0)&&(y<n);
}
vector<pair<int,int>>neighbours={{1,0},{-1,0},{0,1},{0,-1}};

void solve(){
   cin>>n>>m;
   vector<vector<int>>v(n,vector<int>(m,0));
   for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>v[i][j];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        bool ekbadahe=false;
        int mini=0;
        for(int l=0;l<neighbours.size();l++){
            int x=j+neighbours[l].first;
            int y=i+neighbours[l].second;
            if(isvalid(x,y)){
                if(v[y][x]>=v[i][j]){
                    ekbadahe=true;
                    break;
                }
                else mini=max(mini,v[y][x]);
            }
        }
        if(ekbadahe)continue;
        v[i][j]=mini;

    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
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