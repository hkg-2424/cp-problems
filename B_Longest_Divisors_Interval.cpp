#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n;
    cin>>n;
    int ans=0;
    int i=1;
    while(true){
        if((n%i)==0){
            ans++;
            
        }else break;
        i++;
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