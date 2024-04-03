#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n,q;
    cin>>n>>q;
    ll arr[n+1]={0};
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        arr[i]=arr[i-1]+temp;
    }
    for(int i=0;i<q;i++){
        int l,r,k;
        cin>>l>>r>>k;
        ll sum=arr[n]-(arr[r]-arr[l-1])+k*(r-l+1);
        if(sum&1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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