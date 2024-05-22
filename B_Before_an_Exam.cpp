#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,sumtime;
    cin>>d>>sumtime;
    int mintime=0,maxtime=0;
    int minitime[d]{0},maxitime[d]{0};
    for(int i=0;i<d;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        mintime+=temp1;
        maxtime+=temp2;
        minitime[i]=temp1;
        maxitime[i]=temp2;
    }
    if(sumtime>=mintime && sumtime<=maxtime){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    sumtime-=mintime;
    int idx=0;
    while(sumtime>0){
        int expr=maxitime[idx]-minitime[idx];
        if(expr<=sumtime){
            minitime[idx]+=expr;
            sumtime-=expr;
        }else{
            minitime[idx]+=sumtime;
            sumtime=0;
        }
        idx++;
    }
    for(auto &i:minitime){
        cout<<i<<" ";
    }
    cout<<endl;



}