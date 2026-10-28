
class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int sum = 0;
        int cnt = 1;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                cnt++;
            } else {
                sum += (cnt * (cnt - 1)) / 2;
                cnt = 1;
            }
        }

        sum += (cnt * (cnt - 1)) / 2;

        return sum;
    }
};
