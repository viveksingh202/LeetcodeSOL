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
    void inorderTraversal(TreeNode* root, vector<int>& ans){
        if(root == NULL) return;
        inorderTraversal(root->left, ans);
        ans.push_back(root->val);
        inorderTraversal(root->right, ans);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        inorderTraversal(root, ans); 
        int minval=INT_MAX;
        for(int i=1; i<ans.size(); i++){
            int val=abs(ans[i-1]-ans[i]);
           minval=min(minval, val); 
        }   
        return minval;
    }
};