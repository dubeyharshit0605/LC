class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        priority_queue<long long> pq;

        for (int x : arr) {
            pq.push(-1LL * x);
        }

        int cnt = 0;

        while (pq.size() >= 2 && -pq.top() < k) {
            long long x = -pq.top();
            pq.pop();

            long long y = -pq.top();
            pq.pop();
            long long z = 2 * x + y;
            pq.push(-z);

            cnt++;
        }

        return cnt;
    }
};