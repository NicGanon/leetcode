
struct TreeNode {
        int val;
        reeNode *left;
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
		else {
		        if (curNode->right)
				st.push(curNode->right);
			if (curNode->left)
			        st.push(curNode->left);
			
		}
	}
	return dep;
}
