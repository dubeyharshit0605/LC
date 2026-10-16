class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int>st;
        int i=0;
        for(int x:pu){
            st.push(x);
            while(st.size()&&st.top()==po[i]){
                st.pop();
                i++;
            }
        }
        return st.size()==0;
        
    }
};