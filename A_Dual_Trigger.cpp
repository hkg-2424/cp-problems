#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ct=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')ct++;
    }
    if(ct&1)cout<<"NO"<<endl;
    else{
        int i=0;
        while(i<n && ct>0){
            while((i<n) && (s[i]=='0'))i++;
            int j=i+2;
            while((j<n)&&(s[j]=='0'))j++;
            if(j==n){
                cout<<"NO"<<endl;
                return;
            }else{
                s[i]=='0';
                s[j]=='0';
                ct--;
                ct--;
                i=i+1;
            }
        }
        cout<<"YES"<<endl;
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