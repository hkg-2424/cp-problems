#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n ,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);

    }
    ll value=v[k-1];
    // cout<<value<<endl;
    if((value<=v[0]) && (value<=v[1])){
        cout<<"0"<<endl;
        // cout<<"default"<<endl;
        return;
    }
    int ct=0;
    vector<int>idx;
    for(int i=0;i<n;i++){
        if(v[i]>value){
            if(idx.size()<2)idx.push_back(i);
            else break;
        }
    }
    if(idx.size()==0){
        
        cout<<n-1<<endl;
        // cout<<"case0"<<endl;
    }else if(idx[0]>(k-1)){
        cout<<idx[0]-1<<endl;
        // cout<<"case1"<<endl;
    }
    else if(idx[0]<2){

            cout<<min(idx[1]-1,int(k-2))<<endl;;
            // cout<<"case2"<<endl;
           
       
    }else{
        int start=idx[0]-1;
        int start2=min((int)k-1-idx[0],idx[1]-idx[0]);
        cout<<max(start2,start)<<endl;
        // cout<<"case3"<<endl;
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