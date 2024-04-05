#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
       ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int freq=0;
    ll cur=INT_MIN;
    int tempfreq=0;
    for(int i=0;i<n;i++){
        if(v[i]==cur){
            tempfreq++;
        }else{
            freq=max(tempfreq,freq);
            cur=v[i];
            tempfreq=1;
        }
    }
    freq=max(tempfreq,freq);
    // cout<<freq<<endl;
    int ans=0;
    while(freq<n){
        ans++;
        if(2*freq<=n){
            ans+=freq;
            freq*=2;
        }else{
            ans+=(n-freq);
            freq*=2;
        }
    }
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