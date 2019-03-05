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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int>> lv;
        if (root == NULL)
            return lv;
        std::queue<TreeNode*> lq;
        lq.push(root);
        lq.push(NULL);
        
        vector<int> *tmp = new vector<int>;
        while (true) {
            TreeNode* curNode = lq.front();
            lq.pop();
            if (curNode == NULL) {
                lv.push_back(*tmp);
                delete(tmp);
                if (lq.empty())
                    break;
                tmp = new vector<int>;
                lq.push(NULL);
            
            } else {
                tmp->push_back(curNode->val);
                if (curNode->left)
                    lq.push(curNode->left);
                if (curNode->right)
                    lq.push(curNode->right);
                
            }
        }
        return lv;
    }
};
