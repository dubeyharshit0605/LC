class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int diff, vector<vector<int>>& queries) {
        vector<int>cmp(n,0);
        for(int i=1;i<n;i++){
            cmp[i]=cmp[i-1];
            if(nums[i]-nums[i-1]>diff){
                cmp[i]++;
            }
        }
        vector<bool>ans;

        for(auto q:queries){
            int u=q[0];
            int v=q[1];

            ans.push_back(cmp[u]==cmp[v]);
        }
       
       return ans;

    }
};