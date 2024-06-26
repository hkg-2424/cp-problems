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

void solve(){
   int n;
   cin>>n;
   if(n==2){
    cout<<"7 3"<<endl;
    cout<<"1 1 1 2"<<endl;
    cout<<"1 2 1 2"<<endl;
    cout<<"2 1 1 2"<<endl;
    return;
   }
   ll sum=0;

   for(int i=1;i<=n;i++){
    sum+=(2*i-1)*i;
   }
   cout<<sum<<" "<<2*n<<endl;
   for(int i=0;i<n;i++){
    cout<<1<<" "<<n-i<<" ";
    for(int j=0;j<n;j++)cout<<j+1<<" ";
    cout<<endl;
    cout<<2<<" "<<n-i<<" ";
    for(int j=0;j<n;j++)cout<<j+1<<" ";
    cout<<endl;
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