#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(temp>=a)sum+=(a-1);
        else sum+=temp;

    }
    cout<<sum+b<<endl;
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