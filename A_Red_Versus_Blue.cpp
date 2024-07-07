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
   int n,r,b;
   cin>>n>>r>>b;
   int max=r/(b+1);
   if(r%(b+1)>0)max++;
   string ans;
   string temp;
   for(int i=0;i<max;i++){
    temp+='R';
   }
   temp+='B';

   for(int i=0;i<(r%(b+1));i++)ans+=temp;

    if(r%(b+1))max--;
   temp.clear();
   for(int i=0;i<max;i++){
    temp+='R';
   }
   temp+='B';
   for(int i=0;i<b-(r%(b+1));i++)ans+=temp;
   for(int i=0;i<max;i++)ans+='R';
   cout<<ans<<endl;
   
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