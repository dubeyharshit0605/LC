class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push({freq[i],char(i+'a')});
            }
        }
        queue<pair<int,pair<int,char>>>q;
        string ans="";
        int k=2;
        int time=0;
        while(!pq.empty()|| !q.empty()){
            if(!q.empty()&&q.front().first<=time){
                pq.push(q.front().second);
                q.pop();
            }
            if(pq.empty()) return "";
            auto curr=pq.top();
            pq.pop();
            ans=ans+curr.second;
            curr.first--;
            if(curr.first>0){
                q.push({time+k,curr});
            }
            time++;
        }
        return ans;
    }
};