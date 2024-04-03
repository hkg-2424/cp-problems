#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int finans=0;
    
    for(int i=0;i<n;){
        if(s[i]=='>'){
            ans=0;
           while((i<n)&&(s[i]=='>')){
            ans++;
            i++;
            
         
           }
           finans=max(ans,finans);
        }else{
            ans=0;
            while((i<n)&&(s[i]=='<')){
            ans++;
            i++;
           }
           finans=max(ans,finans);
        }
    }
    cout<<finans+1<<endl;
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