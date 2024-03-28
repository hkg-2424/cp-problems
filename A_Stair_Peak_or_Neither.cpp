#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        if(b<c){
            cout<<"STAIR"<<endl;
        }else if(b>c)cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }else{
        cout<<"NONE"<<endl;
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