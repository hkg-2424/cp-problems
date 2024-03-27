//problem link:https://www.codechef.com/problems/SUPINC 
// now the sequence is  1 2 4 8 16 32 64.... so it will result into overflow after 31 if interger is used  or 63 if long long is used thats why we need continuous evaluation.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    ll sum=0,temp=0;
    for(int i=1;i<k;i++){
        temp=sum+1,sum=sum+temp;
        if(sum>=x){cout<<"NO"<<endl;// here you are avoiding overflow condition that is suppose k>63 it will result in overflow
        return;}

    }
    
    if(x>sum)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
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