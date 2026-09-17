class Solution {
public:


int f(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
    int n=arr.size();
    if(j<0 || j>n-1) return 1e9;
    if(i==0) return arr[i][j];
    if(dp[i][j]!=1e9) return dp[i][j];


    int ld=f(i-1,j,arr,dp)+arr[i][j];
    int rd=f(i-1,j-1,arr,dp)+arr[i][j];
    int ud=f(i-1,j+1,arr,dp)+arr[i][j];

    return dp[i][j]=min(ld,min(rd,ud));
}





    int minFallingPathSum(vector<vector<int>>&arr) {
        int n=arr.size();
        int ans=1e9;
        vector<vector<int>>dp(n+1,vector<int>(n+1,1e9));
        for(int j=0;j<n;j++){
            ans=min(ans,f(n-1,j,arr,dp));
        }
        return ans;
    }
};