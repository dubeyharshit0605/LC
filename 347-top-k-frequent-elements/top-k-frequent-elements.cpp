class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        map<int,int>freq;
        for(int i=0;i<arr.size();i++){
           freq[arr[i]]++;
        }
        //vector<int>brr;
        vector<pair<int,int>>brr;
        for(auto it:freq){
            brr.push_back({it.second,it.first});
        }
        sort(brr.rbegin(),brr.rend());

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(brr[i].second);
        }
        return ans;


        
    }
};
