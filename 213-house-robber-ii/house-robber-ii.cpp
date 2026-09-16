class Solution {
public:


    int rec(int i,vector<int>&arr,vector<int>&dp){
        if(i==0) return arr[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];

        int pick=arr[i]+rec(i-2,arr,dp);
        int notpick=rec(i-1,arr,dp);

        return dp[i]=max(pick,notpick);

    }


    int rob(vector<int>& arr) {
      int n=arr.size();
      if(n==1) return arr[0];
       vector<int>dp1(n-1,-1),dp2(n-1,-1);
       vector<int>arr1(arr.begin(),arr.end()-1);
        vector<int>arr2(arr.begin()+1,arr.end());
       

        return max(rec(n-2,arr1,dp1),rec(n-2,arr2,dp2));

    }
};