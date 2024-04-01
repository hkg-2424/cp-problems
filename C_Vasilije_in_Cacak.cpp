#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll min= (k*(k+1))/2;
    ll max=(k*(n+n-k+1))/2;

    // cout<<max<<" "<<min<<endl;
    if((x>=min) && (x<=max))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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