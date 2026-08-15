class Solution {
public:
    vector<int> getAverages(vector<int>& arr, int k) {
        int n = arr.size();
        vector<long long> pre(n);
        vector<int> ans(n, -1);

        pre[0] = arr[0];

        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (i - k < 0 || i + k >= n) {
                continue;
            }

            long long sum;

            if (i - k == 0) {
                sum = pre[i + k];
            } else {
                sum = pre[i + k] - pre[i - k - 1];
            }

            ans[i] = sum / (2LL * k + 1);
        }

        return ans;
    }
};