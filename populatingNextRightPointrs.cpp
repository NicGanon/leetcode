/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root == NULL)
            return;
        std::deque<TreeLinkNode*> traveDeque;
        traveDeque.push_back(root);
        traveDeque.push_back(NULL);
        
        while (traveDeque.size()>1) {
            TreeLinkNode *curNode = traveDeque.front();
            traveDeque.pop_front();
            if (curNode == NULL) {
                traveDeque.push_back(NULL);
                continue;
            }
            TreeLinkNode *nextNode = traveDeque.front();
            curNode->next = nextNode;
            if (curNode->left)
                traveDeque.push_back(curNode->left);
            if (curNode->right)
                traveDeque.push_back(curNode->right);
            
        }
    }
};
