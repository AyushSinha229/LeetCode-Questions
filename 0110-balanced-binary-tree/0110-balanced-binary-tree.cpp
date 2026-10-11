class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return hight(root) != -1;
    }
    int hight(TreeNode* root){
        if(root == NULL) return 0;
        int lh = hight(root ->left);
        if(lh == -1) return -1;
        int rh = hight(root->right);
        if(rh == -1) return -1;

        if(abs(lh - rh) > 1) return -1;

        return 1 + max(lh,rh);
    }
};