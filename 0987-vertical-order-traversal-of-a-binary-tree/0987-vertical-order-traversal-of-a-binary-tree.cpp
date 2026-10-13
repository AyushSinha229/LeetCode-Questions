
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, multiset<int>>> nodes;
        queue<tuple<TreeNode*, int, int>> q;

        if (root == NULL) return {};

        q.push({root, 0, 0});

        while (!q.empty()) {

            auto [cur, row, col] = q.front();
            q.pop();

            nodes[col][row].insert(cur->val);

            if (cur->left != NULL) {
                q.push({cur->left, row + 1, col - 1});
            }

            if (cur->right != NULL) {
                q.push({cur->right, row + 1, col + 1});
            }
        }

        vector<vector<int>> ans;

        for (auto &colPair : nodes) {
            vector<int> column;

            for (auto &rowPair : colPair.second) {
                for (int value : rowPair.second) {
                    column.push_back(value);
                }
            }

            ans.push_back(column);
        }

        return ans;
    }
};
