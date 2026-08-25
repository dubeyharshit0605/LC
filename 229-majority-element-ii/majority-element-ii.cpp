class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        map<int,int>freq;
        set<int>st;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
            st.insert(arr[i]);
        }
        vector<int>brr;
        for(auto it:st){
            if(freq[it]>(arr.size()/3)){
                brr.push_back(it);
            }
        }
        return brr;
        
    }
};