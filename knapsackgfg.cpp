//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


int dp[1001][1001];
class Solution
{   private:
    int solve(int wt[],int val[],int maxweight,int idx){
        if(maxweight<=0)return 0;
        if(idx<0)return 0;
        if(dp[maxweight][idx]!=-1)return dp[maxweight][idx];
        int ans=solve(wt,val,maxweight,idx-1);
        if(maxweight>=wt[idx])ans=max(ans,solve(wt,val,maxweight-wt[idx],idx-1)+val[idx]);
        // cout<<ans<<endl;
        return dp[maxweight][idx]=ans;
    }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       int ans=solve(wt,val,W,n-1);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends