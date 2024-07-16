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
   int n,m,k;
   cin>>n>>m>>k;
   string s;
   cin>>s;
   if(m>=n+1){
    cout<<"YES"<<endl;
    return;
   }
   s=' '+s+' ';
   int currentsegment=0;
   while(currentsegment<s.size()){
    int jumplength=1;
    while(jumplength<=m){
        if(currentsegment+jumplength>=(s.size()-1)){
                cout<<"YES"<<endl;
                return;
            }
        if(s[currentsegment+jumplength]=='L')break;
        jumplength++;
    }
    if(jumplength<=m){
        currentsegment+=jumplength;
    }else{
        currentsegment+=m;
        if(s[currentsegment]=='C'){
            cout<<"NO"<<endl;
            return;
        }
        int lengthofswim=1;
        bool logmila=false;
        while(lengthofswim<=k){
            if(currentsegment+lengthofswim>=(s.size()-1)){
                cout<<"YES"<<endl;
                return;
            }
            if(s[currentsegment+lengthofswim]=='L'){
                currentsegment+=lengthofswim;
                k-=lengthofswim;
                logmila=true;
                break;
            }else if(s[currentsegment+lengthofswim]=='C'){
                cout<<"NO"<<endl;
                return;
            }
            lengthofswim++;
        }
        if(!logmila){
            cout<<"NO"<<endl;
                return;
        }
    }


   }

   cout<<"YES"<<endl;

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