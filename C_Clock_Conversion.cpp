#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    string s;
    cin>>s;
    int h=(s[0]-'0')*10   +(s[1]-'0');
    int m=(s[3]-'0')*10   +(s[4]-'0');
    if((h<=11 )&&(h>0))cout<<s<<" AM"<<endl;
    else if(h==0)cout<<12<<":"<<s[3]<<s[4]<<" AM"<<endl;
    else if(h==12)cout<<12<<":"<<s[3]<<s[4]<<" PM"<<endl;
    else if((h%12)<10)cout<<0<<h%12<<":"<<s[3]<<s[4]<<" PM"<<endl;
    else cout<<h%12<<":"<<s[3]<<s[4]<<" PM"<<endl;
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