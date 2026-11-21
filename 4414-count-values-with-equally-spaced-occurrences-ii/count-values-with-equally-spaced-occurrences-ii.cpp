
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = 0;

        for (auto& [x, v] : mp) {
            int m = v.size();

            if (m < 3) continue;

            int d = v[1] - v[0];
            bool ok = true;

            for (int i = 2; i < m; i++) {
                if (v[i] - v[i - 1] != d) {
                    ok = false;
                    break;
                }
            }

            if (ok) ans++;
        }

        return ans;
    }
};
