class Solution {
public:
using ll=long long;
    int numOfSubarrays(vector<int>& arr, int k, int x) {
        
        int n=arr.size();
        int cnt=0;
        int zcnt=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            cnt++;
            if(cnt==k){
                if(sum/k>=x){
                    zcnt++;
                }
            
            sum=sum-arr[i-k+1];
            cnt--;
            }
        }
        return zcnt;
    }
};