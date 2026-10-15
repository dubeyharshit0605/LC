class Solution {
public:
    int maxCoins(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        long long sum=0;
        for(int i=n/3;i<n;i=i+2){
           sum=sum+arr[i];
        }
        return sum;
        
    }
};