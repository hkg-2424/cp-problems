#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int ans=0;
    int n;
    cin>>n;
    vector<int>v;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    int idx=n-1;
    while(idx>0){
        
        if(v[idx]>v[idx-1]){
            idx--;
            continue;
        }else{
            while(!(v[idx]>v[idx-1])){
                ans++;
                if(v[idx]==0 ){
                    
                    cout<<-1<<endl;
                    return;
                    
                }
                v[idx-1]=(v[idx-1]/2);

            }
           
            idx--;
        }
    }
    // for(auto &i:v)cout<<i<<" ";
    cout<<ans<<endl;
    
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