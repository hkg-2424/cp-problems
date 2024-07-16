#include<bits/stdc++.h>
using namespace std;
long solve(int idx,int value,vector<int>&coins){
    if(value==0)return 1;
    if(idx<0)return 0;
    cout<<"HI WORLD"<<endl;
    cout<<value<<" "<<idx<<endl;
    long ans=0;
    for(int i=0;i<=value/coins[idx];i++){
        ans+=solve(idx-1,value-coins[idx]*i,coins);
    }
    return ans;
}
int main(){
    vector<int>v={1,2,3};
    cout<<solve(2,4,v);
}