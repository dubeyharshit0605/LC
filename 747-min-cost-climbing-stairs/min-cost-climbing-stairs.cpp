class Solution {
public:
   
   int solve(int i,vector<int>&dp,vector<int>&cost){
     if(i==0||i==1) return 0;
     if(dp[i]!=-1) return dp[i];
     int left=cost[i-1]+solve(i-1,dp,cost);
     int right=cost[i-2]+solve(i-2,dp,cost);
     return dp[i]=min(left,right);
   }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return solve(n,dp,cost);
    }
};