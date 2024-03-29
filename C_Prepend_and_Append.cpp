#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=n-1;
    while(i<j){
        if(s[i]==s[j])break;
        else i++,j--;
    }
    cout<<(abs(i-j-1))<<endl;
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