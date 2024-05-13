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
   string s;
   cin>>s;
   int idxofb=-1;
   int a_that_need_b=0,cancelable_a=0;
   int c_that_cancel_a=0;
   for(int i=0;i<n;i++){
    if(s[i]=='b'){
        idxofb=i;
        cancelable_a+=a_that_need_b;
        a_that_need_b=0;
    }
    else if(s[i]=='a'){
        if(idxofb<i){
            a_that_need_b++;
        }
    }else if(idxofb>0 && i>idxofb){
        c_that_cancel_a++;
    }
   }
   cout<<min(c_that_cancel_a++,cancelable_a)<<endl;
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