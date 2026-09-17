class Solution {
public:

 int f(int i,int x,vector<vector<int>>&dp,vector<int>& arr){
      if(i<0||x==0) return 0;
      if(dp[i][x]!=-1) return dp[i][x];

      int nottake=f(i-1,x,dp,arr);

      int take=0;

      if(arr[i]<=x){
        take=arr[i]+f(i-1,x-arr[i],dp,arr);
      }
      return dp[i][x]=max(take,nottake);
 }
 




    int lastStoneWeightII(vector<int>& arr) {
        int total=accumulate(arr.begin(),arr.end(),0);
        int target=total/2;
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
       int sum1=f(n-1,target,dp,arr);
       int sum2=total-sum1;

       return abs(sum2-sum1);

    }
};