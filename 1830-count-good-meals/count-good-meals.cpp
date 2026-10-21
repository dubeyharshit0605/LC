
class Solution {
public:
    int countPairs(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        sort(arr.begin(), arr.end());
        long long cnt = 0;
        for (int i = 0; i <= 21; i++) {
            int j = 0;
            int k = n - 1;
            int t = (1 << i);
            while (j < k) {
                int sum = arr[j] + arr[k];
                if (sum > t) {
                    k--;
                }
                else if (sum < t) {
                    j++;
                }
                else {
                    if (arr[j] == arr[k]) {
                        long long len = k - j + 1;
                        cnt += len * (len - 1) / 2;
                        cnt %= MOD;
                        break;
                    }

                    long long x = 1, y = 1;

                    while (j + 1 < k &&
                           arr[j] == arr[j+1]) {
                        x++;
                        j++;
                    }

                    while (k - 1 > j &&
                           arr[k] == arr[k-1]) {
                        y++;
                        k--;
                    }

                    cnt += x * y;
                    cnt %= MOD;

                    j++;
                    k--;
                }
            }
        }

        return cnt;
    }
};
