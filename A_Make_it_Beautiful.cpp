#include<bits/stdc++.h>
using namespace std;
 
#define  pb(x)       push_back(x)
#define  f           first
#define  s           second
#define  pi          acos(-1.0)
#define  LCM(a,b)    a*b/__gcd(a,b)
#define  GCD(a,b)    __gcd(a,b)
#define  sof         sizeof
#define  endl        '\n'  
#define  eps         1e-6
typedef long long ll;
 
const int mod = 1e9+7;
 
void solve(){
    int n;
    cin>>n;
    ll sum=0;
    int arr[n];
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(sum==arr[i])flag=false;
        sum+=arr[i];
    }
    if(flag){
        cout<<"YES"<<endl;
        for(auto& i:arr)cout<<i<<" ";
        cout<<endl;
    }else{
        bool notallsame=false;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                notallsame=true;
                break;
            }
        }
        sort(arr,arr+n);
        if(!notallsame)cout<<"NO"<<endl;
        else if(arr[n-1]!=arr[n-2]){
            cout<<"YES"<<endl;
            for(int i=n-1;i>=0;i--)cout<<arr[i]<<" ";
            cout<<endl;
        }else{
            int i=0;
            cout<<"YES"<<endl;
            for(;i<n/2;i++){
                cout<<arr[n-1-i]<<" "<<arr[i]<<' ';
            }
            if(n&1)cout<<arr[i];
            cout<<endl;

        }

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