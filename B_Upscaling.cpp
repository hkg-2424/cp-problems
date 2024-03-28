#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)&1)cout<<"..";
            else cout<<"##";
        }
        cout<<endl;
        for(int j=1;j<=n;j++){
            if((i+j)&1)cout<<"..";
            else cout<<"##";
        }
        cout<<endl;
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