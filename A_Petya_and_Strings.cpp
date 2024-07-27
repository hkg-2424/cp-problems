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
transform(a.begin(), a.end(), a.begin(), ::tolower);
transform(b.begin(), b.end(), b.begin(), ::tolower);
// cout<<a<<" "<<b<<endl;
for(int i=0;i<a.size();i++){
    if(a[i]<b[i]){
        cout<<-1<<endl;
        return;
    }else if(a[i]>b[i]){
        cout<<1<<endl;
        return;
    }
}
cout<<0<<endl;
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