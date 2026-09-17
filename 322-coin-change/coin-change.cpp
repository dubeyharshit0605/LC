class Solution {
public:


 int f(int i,int x,vector<vector<int>>&dp,vector<int>&arr){
    if(x==0) return 0;
    if(i<0) return 1e9;

    if(dp[i][x]!=-1) return dp[i][x];

    int nottake=f(i-1,x,dp,arr);
     int take=1e9;
    if(arr[i]<=x){
        take=1+f(i,x-arr[i],dp,arr);
    }
    return dp[i][x]=min(take,nottake);
 }



    int coinChange(vector<int>& arr, int x) {
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(x+1,-1));

        int ans=f(n-1,x,dp,arr);

        if(ans>=1e9) return -1;

        return ans;
    }
};