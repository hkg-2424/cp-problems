//problem link :https://codeforces.com/problemset/problem/1877/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    cout<<-sum<<endl;
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