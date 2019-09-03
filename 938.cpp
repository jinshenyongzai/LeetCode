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
	int rangeSumBST(TreeNode* root, int L, int R) {

		if (root == NULL) 
			return 0; 

		if (root->val < L) 
			return rangeSumBST(root->right, L, R); 

		if (root->val > R) 
			return rangeSumBST(root->left, L, R); 

		return root->val + rangeSumBST(root->right, L, R) + rangeSumBST(root->left, L, R);
	}
};

int main() {

	vector<int> tree = { 10, 5, 15, 3, 7, NULL, 18 };

	TreeNode* root = createTree(tree, 0);

	int ans = Solution().rangeSumBST(root, 7, 15);
	cout << ans << endl;

	return 0;
}