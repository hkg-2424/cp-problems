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
  vector<vector<int>>graphs(n+1);
  for(int i=1;i<=n;i++){
    int temp;
    cin>>temp;
    if(temp==-1){
        graphs[0].push_back(i);
    }else{
        graphs[i].push_back(temp);
        graphs[temp].push_back(i);
    }
  }
  int level=0;
  queue<int>q;
  vector<bool>visited(n+1,false);
  q.push(0);
  while(q.size()){
    int size=q.size();
    for(int i=0;i<size;i++){
        int parent=q.front();
        visited[parent]=true;
        q.pop();
        for(auto &i:graphs[parent]){
            if(visited[i]==false){
                q.push(i);
            }
        }
    }
    level++;
  }
  cout<<level-1<<endl;
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