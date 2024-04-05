#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(2*b==(a+c)){
        cout<<"YES"<<endl;
        return;
    }
    else{
        if(((2*b-c)/(a*1.0)-(2*b-c)/(a))==0 && (2*b-c)/(a)>0){
            cout<<"YES"<<endl;
            return;
            }else if(((2*b-a)/(c*1.0)-(2*b-a)/(c))==0 && (2*b-a)/(c) >0){
                cout<<"YES"<<endl;
                return;
            }else if(((a+c)/(2.0*b)-(a+c)/(2*b))==0 && (a+c)/(2*b)>0){
                cout<<"YES"<<endl;
                return;
            }
    }
    cout<<"NO"<<endl;
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