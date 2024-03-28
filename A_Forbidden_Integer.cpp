// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n" 
// void solve(){
//     int n,k,x;
//     cin>>n>>k>>x;
//     if( (x!=1)){
//         cout<<"YES"<<endl;
//         cout<<n<<endl;
//         for(int i=0;i<n;i++)cout<<1<<" ";
//         cout<<endl;
//         return;
//     }else{
//         if(k==1)cout<<"NO"<<endl;
//         else{
            
//             int remain=n%k;
//             if(remain<=1)cout<<"NO"<<endl;
//             else{
                
//             }
//         }
//     }
//      return;
// }
// int main(void){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll testcase=1;
//     cin>>testcase;
//     while(testcase--){
//          solve();
//     }
    
//     return 0;
// }







//-----------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<"1 ";
        }
        cout<<endl;
    }
    else{  
        if(k==1)cout<<"NO"<<endl;
        else if(k==2 && n&1)cout<<"NO"<<endl;
        else if(k==2){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            while(n){
                cout<<"2 ";
                n-=2;
            }
            cout<<endl;
        }else if(k>=3){
            cout<<"YES"<<endl;
            if(n&1){
                cout<<1+(n-3)/2<<endl;
                cout<<"3 ";
                for(int i=0;i<(n-3)/2;i++)cout<<"2 ";
                cout<<endl;
            }else{
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++)cout<<"2 ";
                cout<<endl;
            }
        }
    }
     return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--){
        // cout<<"testcase no"<<testcase<<endl;
         solve();
    }
    
    return 0;
}