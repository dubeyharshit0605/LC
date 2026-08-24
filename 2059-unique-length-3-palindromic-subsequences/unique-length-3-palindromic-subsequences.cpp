class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,int>freq;
        vector<int>first(26,-1);
        vector<int>last(26,-1);

        for(int i=0;i<s.size();i++){
            char x=s[i]-'a';
            if(first[x]==-1) first[x]=i;
            last[x]=i;
        }
        set<int>st;
        long long sum=0;
        for(char ch=0;ch<26;ch++){
            if(first[ch]<last[ch]){
              for(int i=first[ch]+1;i<last[ch];i++){
                st.insert(s[i]);
              }
               sum=sum+st.size();
              st.clear();
            }
        }
        return sum;
    }
};