//problem link:https://codeforces.com/contest/1873/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int ans=0;
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
            char c;
            cin>>c;
            if(c=='X'){
                ans+=min(min(10-i+1,i),min(10-j+1,j));
            }
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