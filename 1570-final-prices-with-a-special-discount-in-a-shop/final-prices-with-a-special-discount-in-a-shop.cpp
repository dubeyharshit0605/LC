class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int n=p.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&p[i]<=p[st.top()]){
                p[st.top()]-=p[i];
                st.pop();
            }
            st.push(i);
        }
        return p;


    }
};