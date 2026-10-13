class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>&arr2) {
        vector<int>brr;
        set<int>st,st2;
        for(int i=0;i<arr1.size();i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            if(st.find(arr2[i])!=st.end()){
               st2.insert(arr2[i]);
            }
        }
        for(auto v:st2){
            brr.push_back(v);
        }
        return brr;
    }
};