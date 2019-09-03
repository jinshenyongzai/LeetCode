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
	bool isSameTree(TreeNode* p, TreeNode* q) {

		if (p == NULL || q == NULL)
			return p == q;

		if (p->val != q->val)
			return false;

		return isSameTree(p->left, q->left) & isSameTree(p->right, q->right);
	}
};

int main() {

	vector<int> tree1 = { 1, 2, 3 };
	vector<int> tree2 = { 1, 2, 3 };

	TreeNode* root1 = createTree(tree1, 0);
	TreeNode* root2 = createTree(tree2, 0);

	bool ans = Solution().isSameTree(root1, root2);
	cout << ans << endl;

	return 0;
}