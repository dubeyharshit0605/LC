class Solution {
public:
    int leastInterval(vector<char>& a, int n) {
        int k=a.size();
        vector<int>freq(26,0);
        for(int i=0;i<k;i++){
            freq[a[i]-'A']++;
        }
        sort(freq.rbegin(),freq.rend());
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]==freq[0]){
                cnt++;
            }
        }
        return max(k,(freq[0]-1)*(n+1)+cnt);
        
    }
};