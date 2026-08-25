class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        long long sum=0;
        int cnt=0;
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            int rem=sum%k;
            if(rem<0) rem=rem+k;
            cnt=cnt+mpp[rem];
            mpp[rem]++;
        }
        
       
        return cnt;
    }
};