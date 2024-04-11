#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   ll n,m,xpos,ypos;
   cin>>n>>m>>xpos>>ypos;
    ll yoyo1x=xpos-1>n-xpos?1:n;
    ll yoyo1y=ypos-1>m-ypos?1:m;
    // cout<<yoyo1x<<yoyo1y<<endl;
    ll corner1x= yoyo1x==n?1:n;
    ll corner1y=yoyo1y==m?1:m;
    cout<<yoyo1x<<" "<<yoyo1y<<" "<<corner1x<<" "<<corner1y<<endl;
    return;

}
int main(){
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}