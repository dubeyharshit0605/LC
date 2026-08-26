class Solution {
public:
int dp[10010];

 int rec(vector<int>& arr, int x){
    if(x==0) return 0;
    if(x<0) return 1e9;
    if(dp[x]!=-1) return dp[x];
    int mini=1e9;
    for(int i=0;i<arr.size();i++){
        int ans=rec(arr,x-arr[i]);
        if(ans!=1e9){
          mini=min(mini,ans+1);
        }
    }
    return dp[x]=mini;
 }

    int coinChange(vector<int>& arr, int amount) {
       fill(dp,dp+10010,-1);
        int ans=rec(arr,amount);
        if(ans==1e9) return -1;
        return ans;
    }
};
