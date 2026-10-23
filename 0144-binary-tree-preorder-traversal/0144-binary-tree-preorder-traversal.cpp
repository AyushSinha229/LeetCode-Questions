class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int> preorder;
        TreeNode* node = root;

        if(root == NULL) return preorder;

        st.push(root);

        while(!st.empty()){
            node = st.top();
            st.pop();

            preorder.push_back(node->val);

            if(node -> right != NULL){
                st.push(node->right);
            }
            if(node -> left != NULL){
                st.push(node->left);
            }
        }

        return preorder;
    }
};