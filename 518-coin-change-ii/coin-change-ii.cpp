class Solution {
public:

  int f(int i,int x,vector<int>& coins,vector<vector<int>>&dp){
    if(x==0) return 1;
    if(i<0) return 0;

    if(dp[i][x]!=-1) return dp[i][x];

    int nottake=f(i-1,x,coins,dp);

    int take=0;
    if(coins[i]<=x){
        take=f(i,x-coins[i],coins,dp);
    }
    return dp[i][x]=take+nottake;

  }


    int change(int x, vector<int>& coins) {
        int n=coins.size();

        vector<vector<int>>dp(n,vector<int>(x+1,-1));

        return f(n-1,x,coins,dp);
    }
};