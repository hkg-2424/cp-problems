#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int ct=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==-1)ct++;
    }
    if((n-ct)  >= ct){
        //sum>=0
        if(ct&1)cout<<1<<endl; // product is -1
        else cout<<0<<endl;

    }else{
        //now sum is negative and is n-2*ct;
        int ans=(2*ct-n)/2 + ((2*ct-n)&1);
        if((ct-ans)&1)cout<<ans+1<<endl;
        else cout<<ans<<endl;


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