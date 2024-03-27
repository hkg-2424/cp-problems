#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int a,b;
    cin>>a>>b;
    int ans=(b+10-a);
    if(ans<=0){cout<<0<<endl;return;}
    ans=int(ceil(ans/3.0));
    cout<<ans<<endl;
    return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--){
         solve();
    }
    
    return 0;
}