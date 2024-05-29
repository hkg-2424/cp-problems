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
   vector<int>v(32);
   for(int i=0;i<31;i++){
    v[i]=(n&(1<<i))?1:0;
   }
   int carry=0;
   for(int i=0;i<31;i++){
    if(carry){
        if(v[i]==0){
            v[i]=1;
            carry=0;
        }else{
            v[i]=0;
        }
    }

    if(v[i]&&v[i+1]){
        v[i]=-1;
        carry=1;
    }
   }
   while(v.back()==0){
    v.pop_back();
   }
   cout<<v.size()<<endl;
   for(auto &i:v)cout<<i<<" ";
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