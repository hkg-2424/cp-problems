#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,k;
    cin>>n>>k;
    k--;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        // cout<<v[i]<<"@"<<endl;
    }
    ll value=v[k];
    ll idx=-1;
    for(int i=0;i<n;i++){
        if(v[i]>value){idx=i;break;}
        }
    if(idx==-1){cout<<n-1<<endl;return;}
    if(idx>k){
        cout<<idx-1<<endl;return;
    }else{
        ll ans=0;
        if(idx>0)ans=1;
        ll i=idx+1;
        while(i<k && v[i]<value){
            ans++;
            i++;
        }
        cout<<max(ans,idx-1)<<endl;

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