#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int arr[26]={0};
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
    int odd=0;
    int even=0;
    for(int i=0;i<26;i++){
        if(arr[i]==0)continue;

        if(arr[i]&1)odd++;
        else even++;
    }
    k-=odd;
    if(k<-1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    

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