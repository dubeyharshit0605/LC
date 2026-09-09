class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<int>st;
        int n=a.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty()&&a[i]>a[st.top()]){
            
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};