class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        int n=arr.size();
        for(int i=0;i<n;i++){
           freq[arr[i]]++;
        }
       
        int ans=0;
        for(auto &it:freq){
            if(freq.count(it.first+k)){
                ans=ans+freq[it.first+k]*it.second;
            }
        }
        return ans;
    }
};