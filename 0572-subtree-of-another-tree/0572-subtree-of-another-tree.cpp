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
    bool check(TreeNode* root, TreeNode* subRoot){
        if(subRoot==NULL&&root==NULL)return true;
        if(subRoot==NULL||root==NULL)return false;
        bool left=check(root->left,subRoot->left);
        bool right=check(root->right,subRoot->right);
        return root->val==subRoot->val&&left&&right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // if(subRoot==NULL&&root==NULL)return true;
        // if(subRoot==NULL||root==NULL)return false;
        if(subRoot == NULL)
            return true;

        if(root == NULL)
            return false;      
        // bool left=isSubtree(root->left,subRoot->left);
        // bool right=isSubtree(root->right,subRoot->right);
        // return root->val==subRoot->val&&left&&right;
        if(root->val==subRoot->val){
            if(check(root,subRoot))   
                 return true;
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);

    }

};