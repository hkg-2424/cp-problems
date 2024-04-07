#include<bits/stdc++.h>
using namespace std;
#define ll long long
//problem link:https://www.spoj.com/problems/ABCDEF/
 
int32_t main(void){
    int n;
    scanf("%d",&n);
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr.begin(),arr.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[k]==0)continue;
                mp[(arr[i]+arr[j])*arr[k]]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=0;j<n;j++){
            int b=arr[j];
            for(int k=0;k<n;k++){
                int c=arr[k];
                ll sum=a*b+c;
                // int idxofd=returnidx(arr,sum);
                // for(int l=0;l<n;l++){
                //     if(arr[l]!=0 && sum%arr[l]==0){
                //         ans+=mp[sum/arr[l]];
                //     }
                // }
                //divakar ki char gf ho

                ans+=(mp[sum]);
            }
        }
    }
    cout<<ans;
 
    return 0;
}