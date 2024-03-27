//problem link: https://codeforces.com/problemset/problem/1878/A
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    string ans="NO";
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        
        if(temp==k){
            ans="YES";
            
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