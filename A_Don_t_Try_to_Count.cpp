// problem link: https://codeforces.com/problemset/problem/1881/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    // cout<<x<<" "<<s<<endl;
    int idx=0,ids=0;
    for(;idx<n;idx++){
        bool flag=true;
        for(ids=0;ids<m;ids++){
            if(x[(ids+idx)%n]!=s[ids]){
                flag=false;
                break;
            }
        }
        if(flag)break;
    }
    if(ids!=m){cout<<-1<<endl;return;}
    else{
        int letters=(n-idx);
        int size=n;
        int ct=0;
        while(letters<m){
            letters+=n;
            n*=2;
            ct++;

        }
        cout<<ct<<endl;
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