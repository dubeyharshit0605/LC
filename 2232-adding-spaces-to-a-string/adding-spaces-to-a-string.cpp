class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        sort(sp.begin(),sp.end());
         string k;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<sp.size()&&sp[j]==i){
                k.push_back(' ');
                j++;
            }
            k.push_back(s[i]);
        }
        return k;
    }
};