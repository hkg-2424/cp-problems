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
   string s[1000];
   int idx=0;
   string temp;
   int mx=0;
   while(getline(cin,temp)){
      mx=max(mx,(int)temp.size());
      s[idx]=temp;
      idx++;
   }
   for(int i=0;i<mx+2;i++)cout<<"*";
   cout<<endl;

   int ct=0;
   for(int i=0;i<idx;i++){
      cout<<"*";
      int space=mx-(int)s[i].size();
      int leftspace=0;
      if(space&1==1){
         if(ct==0){
            ct++;
            leftspace=space/2;
            
         }else{
            ct--;
            leftspace=space/2;
            leftspace++;
         }
      }else{
         leftspace=space/2;
      }
      int rightspace=space-leftspace;
      for(int j=0;j<leftspace;j++)cout<<" ";
      cout<<s[i];
      for(int j=0;j<rightspace;j++)cout<<' ';

      cout<<"*";
      cout<<endl;
   }
   for(int i=0;i<mx+2;i++)cout<<"*";
   cout<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   // cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}