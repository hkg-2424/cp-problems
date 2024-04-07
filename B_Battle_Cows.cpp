#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    int idx=1;
    ll value=v[k];
    if(v[1]>value && v[2]>value){
        cout<<0<<endl;
        return;
    }
    while(idx<=n){
        if(value<v[idx])break;
        idx++;
    }
    if(idx>k)cout<<idx-2<<endl;
    else{
        cout<<((idx-1)>(k-idx)?(idx-1):k-idx)<<endl;
    }
    
     
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