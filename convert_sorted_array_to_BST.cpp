
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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if (num.empty())
            return NULL;
        TreeNode *head = BuildBST(num,0,num.size()-1);
        
        return head;
    }
    
    TreeNode *BuildBST(vector<int> &num,int lo, int hi)
    {
        if (lo > hi)
            return NULL;
        int mid = (lo+hi)/2;
        TreeNode *head = new TreeNode(num[mid]);
        head->left = BuildBST(num,lo,mid-1);
        head->right = BuildBST(num,mid+1,hi);
        
        return head;
        
    }
    
    
};
