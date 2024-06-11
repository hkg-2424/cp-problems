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
   vector<int>a(n),b(n);
   for(auto &i:a)cin>>i;
   vector<int>bisnotequaltoa;
   for(int i=0;i<n;i++){
    cin>>b[i];
    if(b[i]!=a[i])bisnotequaltoa.push_back(i);
   }
   int m;
   cin>>m;
   map<int,int>mp;
   vector<int>d;
   for(int i=0;i<m;i++){
    int di;
    cin>>di;
    mp[di]++;
    d.push_back(di);
   }
   bool ispossible=true;
   for(int i=0;i<bisnotequaltoa.size();i++){
    if(mp[b[bisnotequaltoa[i]]]==0){
        ispossible=false;
        break;
    }else mp[b[bisnotequaltoa[i]]]--;
   }
   if(ispossible==false){
    cout<<"NO"<<endl;
    return;
   }
   sort(all(b));
   int low=0;
   int high=0;
   while(high<m){
    if(!binary_search(all(b),d[high])){
        low=high;
        while(high<m && !binary_search(all(b),d[high])){
            high++;
        }
        if(high==m)ispossible=false;

    }else{
        low=high+1;

    }
    high++;
   }

   if(ispossible)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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