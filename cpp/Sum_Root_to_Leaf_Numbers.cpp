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
    int sumNumbers(TreeNode *root) {
        if (root == NULL)
            return 0;
        int sum = 0;
        preOrder(root,0,sum);
        
        return sum;
    }
    
    void preOrder(TreeNode *root,int parentSum, int &sum)
    {
        int curSum = parentSum*10 + root->val;
        if (root->left == NULL && root->right == NULL)
            sum += curSum;
        else {
            if (root->left)
                preOrder(root->left,curSum,sum);
            if (root->right)
                preOrder(root->right,curSum,sum);
        }
    }
};
