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
   string a,b;
   cin>>a>>b;
   int maxlengthcommon=0;
   for(int i=0;i<a.size();i++){
    for(int j=0;j<b.size();j++){
        if(a[i]==b[j]){
            int length=0;
            while(i+length<a.size() && j+length<b.size() && a[i+length]==b[j+length]){
                length++;

            }
            maxlengthcommon=max(maxlengthcommon,length);
        }
    }
   }
   cout<<a.size()+b.size()-2* maxlengthcommon<<endl;
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