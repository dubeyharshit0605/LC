class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
       sort(arr.begin(), arr.end(), [](int a, int b) {
    return abs((long long)a) < abs((long long)b);
});
        for(int i=0;i<n;i++){
            int x=arr[i];

            if(freq[x]==0) continue;

            freq[x]--;

            if(freq[2*x]==0) return false;

            freq[2*x]--;
        }
        return true;
    }
};