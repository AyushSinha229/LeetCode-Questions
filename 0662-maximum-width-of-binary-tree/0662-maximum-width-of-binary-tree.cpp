class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if(root == NULL) return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});

        int ans = 0;

        while(!q.empty()){

            int size = q.size();
            int first = 0, last = 0;
            long long mini = q.front().second;

            for(int i = 0 ; i < size ; i++){
                TreeNode* node = q.front().first;

                long long currindex = q.front().second - mini;
                q.pop();

                if(i == 0) first = currindex;
                if(i == size - 1) last = currindex;

                if(node ->left) q.push({node->left, 2*currindex});
                if(node ->right) q.push({node->right, 2*currindex + 1});
            }

            ans = max(ans,(int)(last - first + 1));
        }

        return ans;
    }
};