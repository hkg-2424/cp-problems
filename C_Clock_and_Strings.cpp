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
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a>b){
    int temp=b;
    b=a;
    a=temp;
   }
   if(c>d){
    int temp=c;
    c=d;
    d=temp;
   }
   if((a<c && c<b && b<d)||(a<d && d<b && c<a)){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
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