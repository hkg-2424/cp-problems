#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,k;
    cin>>n>>k;
    if((n&1)==0)cout<<"YES"<<endl;
    else if(k&1){
        if(n>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }else{
        cout<<"NO"<<endl;
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