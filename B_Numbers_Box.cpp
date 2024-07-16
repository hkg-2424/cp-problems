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
   int n,m;
   cin>>n>>m;
   ll sum=0;
   int minnumber=INT_MAX;
   bool iszerothere=false;
   int negativenumbers=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int temp;
        cin>>temp;
        if(temp==0)iszerothere=true;
        else if (temp<0){
            negativenumbers++;
        }
        sum+=abs(temp);
        minnumber=min(minnumber,abs(temp));
    }
   }
   if(iszerothere || ((negativenumbers&1)==0)){
    cout<<sum<<endl;
   }else{
    cout<<sum-2*minnumber<<endl;
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