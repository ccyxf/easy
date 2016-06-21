/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return judge(root->left,root->right);
    }
private:
    bool judge(TreeNode* a,TreeNode* b){
        if(a==NULL&&b==NULL) return true;
        else if(a!=NULL&&b!=NULL&&a->val==b->val) return judge(a->left,b->right)&&judge(a->right,b->left);
        else return false;
    }
};
