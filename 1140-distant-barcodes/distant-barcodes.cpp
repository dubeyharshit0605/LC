class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& s) {
        unordered_map<int, int> freq;

        for (int i : s) {
            freq[i]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto& entry : freq) {
            pq.push({entry.second, entry.first});
        }
        queue<pair<int, pair<int, int>>> q;

        vector<int> ans;
        int k = 2;
        int time = 0;

        while (!pq.empty() || !q.empty()) {
            if (!q.empty() && q.front().first <= time) {
                pq.push(q.front().second);
                q.pop();
            }

            if (pq.empty()) return {};

            auto curr = pq.top();
            pq.pop();

            ans.push_back(curr.second);
            curr.first--;

            if (curr.first > 0) {
                q.push({time + k, curr});
            }

            time++;
        }

        return ans;
    }
};