//problem link:https://codeforces.com/problemset/problem/1858/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    a+=( c&1);
   
    // cout<<a<<" "<<b<<endl;
    cout<<(a>b?"First":"Second")<<endl;
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