#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int x=0;
   
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
      
        x=x^temp;
    }
    
    if(x!=0){
        if((n)&1)cout<<x<<endl;
        else cout<<-1<<endl;
    }else{
        cout<<0<<endl;
    }


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