#include <iostream>
#include <vector>

using namespace std;

class Solution {

private:
	vector<bool> visited;
	vector<int> colors;
	vector<vector<int>> graph;

public:
	bool dfs(int v, int color) {

		visited[v] = true;
		colors[v] = color;

		for (int w : graph[v])
			if (!visited[w]) {
				if (!dfs(w, 1 - color))
					return false;
			}
			else if (colors[v] == colors[w])
				return false;
		return true;
	}

	bool isBipartite(vector<vector<int>>& graph) {

		int V = graph.size();

		visited = vector<bool>(V, false);
		colors = vector<int>(V, 0);
		this->graph = graph;

		for (int v = 0; v < V; v++)
			if (!visited[v])
				if (!dfs(v, 0))
					return false;
		return true;
	}
};

int main() {

	vector<vector<int>> graph1{ {1, 3}, {0, 2}, {1, 3}, {0, 2} };
	vector<vector<int>> graph2{ {1, 2, 3}, {0, 2}, {0, 1, 3}, {0, 2} };

	bool ans1 = Solution().isBipartite(graph1);
	bool ans2 = Solution().isBipartite(graph2);

	cout << ans1 << endl;
	cout << ans2 << endl;
}