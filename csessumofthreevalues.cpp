#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<pair<int,int>>&v,int start,int end,int value){
    
    while(start<=end){
        int mid=(start+end)/2;
        if(v[mid].first<value){
            start=mid+1;
        }else if(v[mid].first>value){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    long long n,x;
    cin>>n>>x;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int idx=binarysearch(v,j+1,n-1,x-v[i].first-v[j].first);
            if(idx!=-1){
                cout<<i<<" "<<j<<" "<<idx<<endl;
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}