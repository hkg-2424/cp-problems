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
vector<int>v(201,0);
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int temp1,temp2;
    cin>>temp1>>temp2;
    v[temp1]++;
    v[temp2]++;
}
int xy=0;
for(int i=0;i<v.size();i++)if(v[i]==1)xy++;
int x=n-xy-1;
cout<<x<<" "<<xy/x<<endl;
 
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