class Solution {
public:
    int rec(int s,int c,int n,vector<vector<int>>&dp){
        if(s==n) return 0;
        if(s>n) return 1e9;

        if(dp[s][c]!=-1) return dp[s][c];

        //copy
        int copy=1e9;
        int paste=1e9;
        if(c!=s){
            copy=1+rec(s,s,n,dp);
        }
        //paste
        if(c>0&&s+c<=n){
           paste=1+rec(s+c,c,n,dp);
        }
        return dp[s][c]=min(copy,paste);
    }

    int minSteps(int n) {
        if(n==1) return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
         return rec(1,0,n,dp);
    }
};