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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int l=0;

        while(!q.empty()){
            int n=q.size();
            int prev=(l%2==0)?-1e9:1e9;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                int val=node->val;
                if(l%2==0){
                    if(val%2==0||val<=prev){
                        return false;
                    }
                }else{
                    if(val%2!=0|| val>=prev ){
                        return false;
                    }
                }
                prev=val;
                if(node->left!=0){
                    q.push(node->left);
                }
                if(node->right!=0){
                    q.push(node->right);
                }
            }
            l++;
        }
        return true;
    }
};