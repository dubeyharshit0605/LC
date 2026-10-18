class Solution {
public:
    using ll = long long;
    multiset<int> st;

    void insert(int x) {
        st.insert(x);
    }

    void erase(int x) {
        st.erase(st.find(x));
    }

    bool check(int x) {
        if (st.empty()) return true;

        int mini = min(*st.begin(), x);
        int maxi = max(*st.rbegin(), x);

        return maxi - mini <= 2;
    }

    long long continuousSubarrays(vector<int>& arr) {
        int n = arr.size();
        int head = -1;
        int tail = 0;
        ll ans = 0;

        while (tail < n) {
            while (head + 1 < n && check(arr[head + 1])) {
                head++;
                insert(arr[head]);
            }

            ans += head - tail + 1;

            if (tail > head) {
                tail++;
                head = tail - 1;
            } else {
                erase(arr[tail]);
                tail++;
            }
        }

        return ans;
    }
};