class Solution {
public:
    int maxScore(vector<int>& arr) {
        int n=arr.size();
        sort(arr.rbegin(),arr.rend());
        long long sum=0;
        long long maxi=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>0) maxi++;
        }
        return maxi;
    }
};