#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n&1 && m&1){
        cout<<(n/2)*m+m/2<<endl;
    }else{
        cout<<n*m/2<<endl;
    }
}