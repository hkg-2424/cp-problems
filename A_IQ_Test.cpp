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
   char matrix[4][4];
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++)cin>>matrix[i][j];
   }
 
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        char temp=matrix[i][j];
        int ans=0;
        if(temp==matrix[i+1][j])ans++;
        
        if(temp==matrix[i][j+1])ans++;
       
        if(temp==matrix[i+1][j+1])ans++;
        if(ans>=2){
            cout<<"YES";
            return;
        }
        ans=0;
        if(temp!=matrix[i+1][j])ans++;
        
        if(temp!=matrix[i][j+1])ans++;
       
        if(temp!=matrix[i+1][j+1])ans++;
        if(ans==3){
            cout<<"YES";
            return;
        }
    }
   }
   cout<<"NO"<<endl;


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