class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        long long sum=0;
        int l=0;
        long long maxi=0;
        int r=arr.size()-1;
        for(int i=0;i<k;i++){
            sum=sum+arr[l];
            l++;
        }
        maxi=max(maxi,sum);
        l--;
        for(int i=0;i<k;i++){
            sum=sum-arr[l];
            sum=sum+arr[r];
            maxi=max(maxi,sum);
            l--;
            r--;
        }
        return maxi;
    }
};