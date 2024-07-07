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
   ll n,k,b,s;
   cin>>n>>k>>b>>s;
//    cout<<"hello world"<<endl;
   if(s<b*k){
    cout<<-1<<endl;
    return;
   }else if(s>(k-1)*n+b*k){
    cout<<-1<<endl;
    return;
   }
   vector<ll>v(n,0);
   for(int i=0;i<n;i++){
    v[i]=b/n;
   }
   for(int i=0;i<b%n;i++)v[i]++;
 
   for(int i=0;i<n;i++){
    v[i]*=k;
   
   }
   ll more=s-b*k;
   if(more>0){
        for(int i=0;i<(more/(k-1));i++){
            v[i]+=(k-1);
        }
        v[more/(k-1)]+=more%(k-1);
   }
   
   for(int i=0;i<n;i++)cout<<v[i]<<" ";
   cout<<endl;

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