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
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   sort(all(v));
   if(v[0]==1){
    cout<<"Yes"<<endl;
    return;
   }
   vector<bool>isdivisble(n,false);
   int second=n+1;
   for(int i=0;i<n;i++){
    if(v[i]%v[0]){
        second=min(i,second);
    }else{
        isdivisble[i]=true;
    }

   }
   for(int i=second;i<n;i++){
    if((isdivisble[i]==false) &&(v[i]%v[second]>0)){
        cout<<"No"<<endl;
        return;
    }
   }
   cout<<"Yes"<<endl;
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