#include <iostream>
#include <vector>
#include <queue>

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
private:
	vector<int> res;

public:
	vector<int> inorderTraversal(TreeNode* root) {

		if (root == NULL)
			return {};

		if (root->left != NULL)
			inorderTraversal(root->left);

		res.push_back(root->val);

		if (root->right != NULL)
			inorderTraversal(root->right);

		return res;
	}
};

int main() {

	vector<int> tree = { 1, NULL, 2, NULL, NULL, 3, NULL };
	vector<int> ans;

	TreeNode* root = createTree(tree, 0);
	ans = Solution().inorderTraversal(root);

	for (auto &s1 : ans)
		cout << s1 << " ";
	cout << endl;

	return 0;
}