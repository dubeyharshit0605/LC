class Solution {
public:
    int longestSubstring(string s, int k) {
        int maxi=0;
        for(int i=1;i<=26;i++){
            vector<int>mpp(26,0);
           int head=-1;
           int tail=0;
           int distinct=0;
           int valid=0;
           while(tail<s.size()){
             while(head+1<s.size()){
                int ch=s[head+1]-'a';

             if(mpp[ch]==0&&i==distinct) break;
             head++;
             if(mpp[ch]==0) distinct++;
             mpp[ch]++;

             if(mpp[ch]==k) valid++;

           }
           if(i==distinct&&valid==i){
            maxi=max(maxi,head-tail+1);
           }
           if(tail>head){
            tail++;
            head=tail-1;
           }else{
             
            int ch=s[tail]-'a';
            if(mpp[ch]==k) valid--;
            mpp[ch]--;
            if(mpp[ch]==0) distinct--;
            tail++;

           }
        }
    }
    return maxi;
    }
};