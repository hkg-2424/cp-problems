#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    string s;
    cin>>s;
    // cout<<s<<endl;
    vector<int>v0(2,-1),v5(2,-1);
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            v0[0]=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='5'){
            v5[0]=i;
            break;
        }
    }
    for(int i=v0[0]-1;i>=0;i--){
        if(s[i]=='0'|| s[i]=='5'){
            v0[1]=i;
            break;
        }
    }
    int n=s.size();
    for(int i=v5[0]-1;i>=0;i--){
        if(s[i]=='2'|| s[i]=='7'){
            v5[1]=i;
            break;
        }
    }
    int ans1=INT_MAX,ans2=INT_MAX;
    if(v0[0]>-1 && v0[1]>-1){
        ans1=n-1-v0[0];
        ans1+=(v0[0]-1-v0[1]);
    }
    if(v5[0]>-1 && v5[1]>-1){
        ans2=n-1-v5[0];
        ans2+=(v5[0]-1-v5[1]);
    }
    // cout<<v0[0]<<" *"<<v0[1]<<endl;
    // cout<<v5[0]<<" "<<v5[1]<<endl;

    cout<<min(ans2,ans1)<<endl;

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