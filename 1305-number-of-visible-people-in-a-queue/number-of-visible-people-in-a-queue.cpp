class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        stack<int> st;
        int n = h.size();
        vector<int> ans(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            int cnt = 0;

            while (!st.empty() && h[i] > h[st.top()]) {
                st.pop();
                cnt++;
            }

            if (!st.empty()) {
                cnt++;
            }

            ans[i] = cnt;
            st.push(i);
        }

        return ans;
    }
};