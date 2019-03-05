#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x),left(NULL),right(NULL) {}
};

void flatten(TreeNode *root) 
{
    if (root == NULL)
				return;
		std::stack<TreeNode*> flat;
		flat.push(root);
		TreeNode *newHead = NULL;
		TreeNode *newTail = NULL;

    while (!flat.empty()) {
				TreeNode *curNode = flat.top();
				flat.pop();
				if (newTail == NULL)
						newHead = newTail = curNode;
				else {
						newTail->right = curNode;
						newTail = newTail->right;
				}
				if (curNode->right)
						flat.push(curNode->right);
				if (curNode->left)
						flat.push(curNode->left);
		}

    root = newHead;
    TreeNode *cur = root;
		while (cur) {
				cout << cur->val << endl;
				cur = cur->right;
		}
}

int main()
{
		TreeNode *root = new TreeNode(1);
		root->left = NULL;
		root->right = new TreeNode(2);

		flatten(root);

		return 0;
}
