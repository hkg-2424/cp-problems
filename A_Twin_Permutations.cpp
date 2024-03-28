#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<n+1-arr[i]<<' ';
    }
    cout<<endl;
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