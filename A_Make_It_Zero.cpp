#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int x=0;int idxof=0;
    
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        if(temp==0)idxof=i;
        x=temp^x;
    }
    if(x==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
    }else if(n&1){
        cout<<4<<endl;
        if((idxof&1)&&(idxof!=1) &&(idxof!=n)){
            cout<<1<<" "<<idxof-1<<endl;
             cout<<1<<" "<<idxof-1<<endl;
            cout<<idxof+1<<" "<<n<<endl;
              
            cout<<idxof+1<<" "<<n<<endl;
        }else if((idxof&1)&&(idxof!=1)){
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            
            }
        else if(idxof&1){
            cout<<idxof+1<<" "<<n<<endl;
            cout<<idxof+1<<" "<<n<<endl;
            cout<<idxof+1<<" "<<n<<endl;
            cout<<idxof+1<<" "<<n<<endl;
        }else{
            cout<<1<<' '<< idxof<<endl;
            cout<<idxof+1<<" "<<n<<endl;
            cout<<1<<' '<< idxof<<endl;
            cout<<idxof+1<<" "<<n<<endl;
        }

    }else{
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
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