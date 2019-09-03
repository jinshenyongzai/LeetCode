#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* createTree(vector<int> &tree, int index) {

	if (index >= tree.size())
		return NULL;

	TreeNode* root = new TreeNode(tree[index]);
	root->left = createTree(tree, 2 * index + 1);
	root->right = createTree(tree, 2 * index + 2);

	return root;
}

class Solution {
public:

	bool isMirror(TreeNode* p, TreeNode* q) {

		if (p == NULL && q == NULL)
			return true;
		if (p == NULL || q == NULL)
			return false;
		if (p->val != q->val)
			return false;

		return isMirror(p->left, q->right) && isMirror(p->right, q->left);
	}

	bool isSymmetric(TreeNode* root) {

		if (root == NULL)
			return true;
		return isMirror(root->left, root->right);
	}
};

int main() {

	vector<int> tree = { 1, 2, 2, 3, 4, 4, 3 };

	TreeNode* root = createTree(tree, 0);

	bool ans = Solution().isSymmetric(root);
	cout << ans << endl;

	return 0;
}