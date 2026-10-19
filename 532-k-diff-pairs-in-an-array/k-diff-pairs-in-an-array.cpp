class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(int x:arr) freq[x]++;
        int ans=0;
        if(k==0){
            for(auto &it:freq){
                if(it.second>1) ans++;
            }
        }else{
            for(auto &it:freq){
               if(freq.count(k+it.first)){
                ans++;
               }
            }
        }
        return ans;

        }
    
};