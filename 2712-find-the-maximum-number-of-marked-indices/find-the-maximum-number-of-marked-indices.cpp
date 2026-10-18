class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;
        int i=0;
        int j=n/2;
        while(i<n/2&&j<n){
            if(arr[i]*2<=arr[j]) ans+=2,i++,j++;
            else j++;
        }
        return ans;
    }
};