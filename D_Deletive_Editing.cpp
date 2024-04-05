#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    
    string s,t;
    
    cin>>s>>t;
    
    vector<int>vs[26];
    for(int i=0;i<s.size();i++){
        vs[s[i]-'A'].push_back(i);
    }
    
    int idx;
    int i=t.size()-1;
    if(vs[t[i]-'A'].size()==0){
        cout<<"NO"<<endl;
        return;
    }else{
        idx=vs[t[i]-'A'].back();
        vs[t[i]-'A'].pop_back();
        }
        int idx2;
    for( i=t.size()-2;i>=0;i--){
        if(vs[t[i]-'A'].size()==0){
            cout<<"NO"<<endl;
            return;
        }else{
            idx2=vs[t[i]-'A'].back();
            vs[t[i]-'A'].pop_back();
            // cout<<idx2<<"*"<<idx<<endl;
            if(idx2>idx){
                cout<<"NO"<<endl;
                return;
            }
            idx=idx2;
        }

    }
    cout<<"YES"<<endl;
    return;
}
int main(void){


ll testcase=1;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>testcase;
while(testcase--){
    
   solve();
   
}

return 0;
}