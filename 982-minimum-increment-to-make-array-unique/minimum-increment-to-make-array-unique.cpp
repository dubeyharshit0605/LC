class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;

        for(int i=1;i<n;i++){
            if(arr[i]<=arr[i-1]){
                int need=arr[i-1]+1;
                ans=ans+(need-arr[i]);
                arr[i]=need;
            }
        }
        return ans;
    }
};