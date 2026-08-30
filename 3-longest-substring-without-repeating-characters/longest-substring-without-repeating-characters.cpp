class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int head=-1;
        int tail=0;
        int n=s.size();
        int maxi=0;
        map<int,int>mpp;
        while(tail<n){
            while(head+1<n&&mpp[s[head+1]]<=0){
                head++;
                mpp[s[head]]++;
            }
            maxi=max(maxi,head-tail+1);
            if(tail>head){
                head=tail-1;
                tail++;
            }else{
                mpp[s[tail]]--;
                tail++;
            }
        }
        return maxi;
    }
};
