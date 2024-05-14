#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>&v,int i,int j,int rows,int cols ,int& currentlength){
    int recievedlength=currentlength;
    if(i+1<rows){
        if(j-1>=0){
            if(v[i+1][j-1]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i+1,j-1,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
        {
            if(v[i+1][j]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i+1,j,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
        if(j+1<cols){
            if(v[i+1][j+1]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i+1,j+1,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
    }

    if(j+1<cols){
        if(v[i][j+1]==(currentlength+1)){
            int templength=recievedlength+1;
            dfs(v,i,j+1,rows,cols,templength);
            currentlength=max(currentlength,templength);
        }
    }
    if(j-1>=0){
        if(v[i][j-1]==(currentlength+1)){
            int templength=recievedlength+1;
            dfs(v,i,j-1,rows,cols,templength);
            currentlength=max(currentlength,templength);
        }
    }



    if(i-1>=0){
        if(j-1>=0){
            if(v[i-1][j-1]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i-1,j-1,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
        {
            if(v[i-1][j]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i-1,j,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
        if(j+1<cols){
            if(v[i-1][j+1]==(currentlength+1)){
                int templength=recievedlength+1;
                dfs(v,i-1,j+1,rows,cols,templength);
                currentlength=max(currentlength,templength);
            }
        }
    }
}

int main(void){
    int h,w;
    cin>>h>>w;
    while((h!=0) && (w!=0)){
        int ans=0;
        vector<vector<int>>v(h,vector<int>(w,0));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                char c;
                cin>>c;
                v[i][j]=c-'A'+1;
            }
        }

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(v[i][j]==1){
                    int tempans=1;
                    dfs(v,i,j,h,w,tempans);
                    ans=max(tempans,ans);
                }
            }
        }
        cout<<ans<<endl;
        cin>>h>>w;
    }
}