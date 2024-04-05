#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    vector<ll> v;
   
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
        
    }
    ll ans=0;
    ll idx=0;
    while(idx<n){
        bool flag=false;
        while(idx<n && v[idx]!=0 ){
            idx++;
            flag=true;
        }
        idx++;
        if(flag)ans++;

    }
    if(ans>2)ans=2;
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