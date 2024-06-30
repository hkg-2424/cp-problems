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
   ll a,b;
   cin>>a>>b;
   if(a==b){
    cout<<0<<endl;
    return;
   }
   int a2=0,a3=0,a5=0;
   while((a%2)==0){
    a2++;
    a/=2;

   }
   while((a%3)==0){
    a3++;
    a/=3;
   }
   while((a%5)==0){
    a5++;
    a/=5;
   }


    while((b%2)==0){
    a2--;
    b/=2;

   }
   while((b%3)==0){
    a3--;
    b/=3;
   }
   while((b%5)==0){
    a5--;
    b/=5;
   }
   if(a==b){
    cout<<abs(a2)+abs(a3)+abs(a5)<<endl;
   }else{
    cout<<-1<<endl;
   }
   
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}