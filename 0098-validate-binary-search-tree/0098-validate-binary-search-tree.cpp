class Solution {
public:
    bool check(TreeNode* root, long long maxi, long long mini) {
        if (root == NULL) return true;

        if (root->val >= maxi || root->val <= mini)
            return false;

        return check(root->left, root->val, mini) &&
               check(root->right, maxi, root->val);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LONG_MAX, LONG_MIN);
    }
};