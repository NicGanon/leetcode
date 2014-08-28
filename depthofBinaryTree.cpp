#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x):val(x),left(NULL),right(NULL) {}
};

int maxDepth(TreeNode *root){
    if (!root)
				return 0;
		queue<TreeNode*> st;
		st.push(root);
		int dep = 1;
		TreeNode *boundary = NULL;
		st.push(boundary);
		while (!st.empty()) {
		    TreeNode *curNode = st.front();
				st.pop();
				if (!curNode ) {
				    if (st.empty())
								break;
						dep++;
						st.push(boundary);
				}
				else 
				{
						//cout << curNode->val << endl;
						if (curNode->right)
						    st.push(curNode->right);
				    if (curNode->left)
						    st.push(curNode->left);
        }
		}
		return dep;
}

int main()
{
		TreeNode *root = new TreeNode(1);
		root->left = new TreeNode(2);
		root->left->left = new TreeNode(3);
		root->left->left->right = new TreeNode(4);
    cout << maxDepth(root)<<endl;;
		return 0;
}
