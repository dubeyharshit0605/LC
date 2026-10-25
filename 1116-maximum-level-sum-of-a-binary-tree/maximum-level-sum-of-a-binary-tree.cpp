/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        //q.pop();
        vector<pair<long long,int>>v;
        int l=1;

        while(!q.empty()){
            //TreeNode* node=q.front();
            int n=q.size();
            //q.pop();
            
            long long sum=0;
            while(n--){
             TreeNode* node=q.front();
              q.pop();
            sum=sum+(node->val);
            if(node->left){
                q.push(node->left);
            }
             if(node->right){
                q.push(node->right);
            }
        }
        
        v.push_back({sum,l});
        l++;

    }
    sort(v.rbegin(),v.rend());
    int z=v.size();
    
    int x=v[0].first;
    int ans=v[0].second;
    for(int i=0;i<z-1;i++){
       if(x==v[i+1].first){
         ans=v[i+1].second;
       }
    }
    return ans;
    }
};