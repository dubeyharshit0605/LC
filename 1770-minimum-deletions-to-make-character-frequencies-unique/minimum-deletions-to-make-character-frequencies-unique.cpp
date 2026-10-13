class Solution {
public:
using ll=long long;
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        ll step=0;
        ll prev=1e9;

        for(auto x:freq){
            ll target=max(0ll,min((ll)x,prev-1));
            //if(target<0) return -1;
            step+=x-target;
            prev=target;
        }
        return step;

    }
};