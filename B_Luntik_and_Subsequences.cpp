#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int temp;
    ll zeroes=0,ones=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp==0)zeroes++;
        else if(temp==1)ones++;
    }
    cout<<pow(2ll,zeroes)*ones<<endl;
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