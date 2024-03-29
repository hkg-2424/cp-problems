#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll difx=c-a;
    ll dify=d-b;
    if(dify<0 || dify<difx)cout<<-1<<endl;
    else{
        ll ans=dify;
        ans+=(dify-difx);
        cout<<ans<<endl;
    }
    return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--){
         solve();
    }
    
    return 0;
}