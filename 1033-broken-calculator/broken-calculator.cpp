class Solution {
public:

  int rec(int s,int t){
    if(t<=s) return s-t;
    //f(dp[t]!=-1) return dp[t];
    if(t%2==0){
        return 1+rec(s,t/2);
    }
    return 1+rec(s,t+1);
  }

    int brokenCalc(int s, int t) {
        //vector<int>dp(2*t+2,-1);
        return rec(s,t);
        
    }
};