/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> postTrav;
        if (root == NULL)
            return postTrav;
        std::stack<TreeNode*> traveStack;
        traveStack.push(root);
        std::stack<TreeNode*> output;

        while (!traveStack.empty()) {
            TreeNode *curNode = traveStack.top();
            output.push(curNode);
            traveStack.pop();
            if (curNode->left)
                traveStack.push(curNode->left);
            if (curNode->right)
                traveStack.push(curNode->right);
        }
        while (!output.empty()) {
            TreeNode *cur = output.top();
            postTrav.push_back(cur->val);
            output.pop();
        }
        return postTrav;
    }
};
