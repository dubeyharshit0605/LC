class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int>first(2001,-1);
        vector<int>brr;
        long long sum=0;
         for(int i=0;i<s.size();i++){
            sum=0;
            for(int j=0;j<s.size();j++){
                if(s[j]=='1'){
                    sum=sum+abs(i-j);
                }
            }
            brr.push_back(sum);
            //sum=0;

         }
        
          return brr;
        }
    
};