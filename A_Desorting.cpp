#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    int cur;
    cin>>cur;
    for(int i=1;i<n;i++){
        int temp;
        cin>>temp;
        ans=min(ans,temp-cur);
        cur=temp;
    }
    if(ans<0)cout<<0<<endl;
    else {
        ans++;
        cout<<(ans/2)+(ans&1)<<endl;
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