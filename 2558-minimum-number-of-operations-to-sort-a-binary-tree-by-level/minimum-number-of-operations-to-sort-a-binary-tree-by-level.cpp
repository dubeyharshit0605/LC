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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            while(n--){
            TreeNode* node=q.front();
            q.pop();
            v.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            }
            vector<int>l=v;
            sort(l.begin(),l.end());

            unordered_map<int,int>mpp;
            for(int i=0;i<v.size();i++){
                mpp[v[i]]=i;
            }
            for(int i=0;i<v.size();i++){
                if(v[i]!=l[i]){
                    int j=mpp[l[i]];
                    int old=v[i];
                    swap(v[i],v[j]);
                    mpp[old]=j;
                    mpp[l[i]]=i;
                    ans++;

                }
            }
        }
        return ans;
    }
};