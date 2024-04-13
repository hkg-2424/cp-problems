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
   // ll n;
   // cin>>n;
   // // cout<<"hello"<<endl;
   // // int operations=n+n/2;
   // // ll value=n*n*(n+1)/2 + n*n*n/8;
   // // cout<<value<<" "<<operations<<endl;


   // // for(int i=0;i<n;i++){
   // //  cout<<1<<" "<<i+1<<" ";;
   // //  for(int j=0;j<n;j++)cout<<j+1<<" ";
   // //  cout<<endl;
   // // }
   // // for(int i=0;i<n/2;i++){
   // //  cout<<2<<" "<<i+1<<" ";;
   // //  for(int j=0;j<n;j++)cout<<j+1<<" ";
   // //  cout<<endl;
   // // }
   // // THIS LOGIC IS WRONG BECAUSE YOU DIDN'T APPLIED FOR GREATER VALUES OF N

   // int arr[n+1][n+1];
   // for(int i=1;i<=n;i++){
   //    for(int j=1;j<=n;j++){
   //       arr[i][j]=max(i,j);
   //    }
   // }
   // for(int i=n/2+1;i<=n;i++){
   //    for(int j=n/2+1;j<=n;j++){
   //       arr[i][j]=j;
   //    }
   // }
   // ll ans=0;
   // for(int i=1;i<=n;i++){
   //    for(int j=1;j<=n;j++){
   //       ans+=arr[i][j];
   //    }
   // }
   // ll newn=n,tempn=n;
   // ll operations=0;
   // while(n){
   //    operations+=n;
   //    n=n/2;
   // }
   // ll sign=1;
   // cout<<ans<<" "<<operations<<endl;
   // while(tempn){
   //    for(int i=1;i<=tempn;i++){
   //       cout<<sign<<" "<<i<<' ';
   //       for(int j=1;j<=newn;j++){
   //          cout<<j<<" ";
   //       }
   //       cout<<endl;
   //    }
   //    tempn=tempn/2;
   //    sign=(sign==1?2:1);
   // }
   
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