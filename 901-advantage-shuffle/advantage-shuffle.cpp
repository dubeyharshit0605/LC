class Solution {
public:
    vector<int> advantageCount(vector<int>& arr1, vector<int>& arr2) {
        multiset<int>mt(arr1.begin(),arr1.end());
        
        vector<int>brr;
       for(int x:arr2){
        auto it=mt.upper_bound(x);
        if(it==mt.end()) it=mt.begin();
        brr.push_back(*it);
        mt.erase(mt.find(*it));
       }
       return brr;
        
    }
};