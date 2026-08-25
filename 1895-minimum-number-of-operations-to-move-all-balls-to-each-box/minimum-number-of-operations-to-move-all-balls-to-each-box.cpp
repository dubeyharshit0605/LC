class Solution {
public:
    vector<int> minOperations(string s) {
        int n=s.size();
        vector<int>ans(n,0);
        int ball=0;
        int move=0;

        for(int i=0;i<n;i++){
            ans[i]+=move;
            if(s[i]=='1'){
                ball++;
            }
            move=move+ball;
        }

         ball=0;
         move=0;

        for(int i=n-1;i>=0;i--){
            ans[i]+=move;
            if(s[i]=='1'){
                ball++;
            }
            move=move+ball;
        }
        return ans;


    }
    
};