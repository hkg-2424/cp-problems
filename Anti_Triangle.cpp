#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,l;
    cin>>n>>l;
    ll temp=1;
    if(l>100000){{
        for(int i=1;i<n;i++){
            cout<<i<<endl;
        }
    }

    }
    else{
        for(int i=0;i<n;i++){
        cout<<temp<<' ';
        temp+=l;
    }
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