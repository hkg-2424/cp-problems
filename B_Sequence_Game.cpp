//problem link: https://codeforces.com/problemset/problem/1862/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    int temp;
    int curr;
    vector<int>v;
    cin>>curr;
    v.push_back(curr);
    for(int i=0;i<n-1;i++){
        temp=curr;
        cin>>curr;
        if(curr>=temp){
            v.push_back(curr);
            
        }else if(curr<temp){
            v.push_back(1);
            v.push_back(curr);
        }
    }
    cout<<v.size()<<endl;
    for(auto & i:v)cout<<i<<" ";
    cout<<endl;

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