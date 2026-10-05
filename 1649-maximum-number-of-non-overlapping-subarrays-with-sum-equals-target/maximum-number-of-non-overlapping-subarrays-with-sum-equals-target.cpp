class Solution {
public:
    int maxNonOverlapping(vector<int>& arr, int target) {
       int ans=0;
       unordered_set<int>st;
       int prefixsum=0;
       st.insert(0);
       for(auto &i:arr){
         prefixsum+=i;
         if(st.count(prefixsum-target)){
            ans++;
            st.clear();
            st.insert(0);
            prefixsum=0;
         }else{
            st.insert(prefixsum);
         }
       }
       return ans;
    }
};
