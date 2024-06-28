#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++)cout<<"  ";
        for(int j=0;j<i;j++)cout<<j<<" ";
        for(int j=i;j>=0;j--){
            if(j==0){
                cout<<j;
                break;;
            }
            cout<<j<<" ";
        }
        // for(int j=1;j<=n-i;j++)cout<<" ";
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-i;j++)cout<<"  ";
        for(int j=0;j<=i;j++)cout<<j<<' ';
        for(int j=i-1;j>=0;j--){
            if(j==0){
                cout<<0;
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)cout<<"  ";
    cout<<0<<endl;
}