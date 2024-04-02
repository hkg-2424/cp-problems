#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int xo=0;
    
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        
        xo=(xo^temp);
    }
    if(xo==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
    }else if((n&1) == 0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }else{
        cout<<4<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<2<<" "<<n<<endl;
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