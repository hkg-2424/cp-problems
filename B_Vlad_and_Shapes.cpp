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
   
   int rows[n];
   for(int i=0;i<n;i++){
    int nums=0;
    for(int j=0;j<n;j++){
        char c;
        cin>>c;
        if(c=='1'){
            nums++;
        }
    }
    rows[i]=nums;
   }
   int idx=0;
   while(rows[idx]==0)idx++;
   if(rows[idx]==rows[idx+1])cout<<"SQUARE"<<endl;
   else cout<<"TRIANGLE"<<endl;
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