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

void preOrder(TreeNode* node){
	if (node == NULL)
		return;

	cout << node->val << " ";
	preOrder(node->left);
	preOrder(node->right);
}

void inOrder(TreeNode* node) {
	if (node == NULL)
		return;

	inOrder(node->left);
	cout << node->val << " ";
	inOrder(node->right);
}

void postOrder(TreeNode* node) {
	if (node == NULL)
		return;

	postOrder(node->left);
	postOrder(node->right);
	cout << node->val << " ";
}

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {

		vector<vector<int>> res;
		if (root == NULL)
			return res;

		queue<pair<TreeNode*, int>> q;
		q.push(make_pair(root, 0));

		while (!q.empty()) {

			TreeNode* node = q.front().first;
			int level = q.front().second;
			q.pop();

			if (level == res.size())
				res.push_back(vector<int>());
			res[level].push_back(node->val);

			if (node->left)
				q.push(make_pair(node->left, level + 1));
			if (node->right)
				q.push(make_pair(node->right, level + 1));
		}

		return res;
	}
};

// int main() {

// 	vector<int> tree = { 3, 9, 20, NULL, NULL, 15, 7 };
// 	vector<vector<int>> ans;

// 	TreeNode* root = createTree(tree, 0);
// 	ans = Solution().levelOrder(root);
	
// 	for (auto &s1 : ans) {
// 		for (auto &s2 : s1)
// 			cout << s2 << " ";
// 		cout << endl;
// 	}

// 	return 0;
// }
