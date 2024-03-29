#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int ans=INT_MIN;
    int curlength=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp){
            ans=max(ans,curlength);
            curlength=0;
        }else curlength++;
    }
    ans=max(ans,curlength);
    cout<<ans<<endl;
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