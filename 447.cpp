#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:

	int squareOfDistance(vector<int> pointsA, vector<int> pointB) {
		return (pointsA[0] - pointB[0]) * (pointsA[0] - pointB[0]) + (pointsA[1] - pointB[1]) * (pointsA[1] - pointB[1]);
	}

	int numberOfBoomerangs(vector<vector<int>>& points) {
		
		int res = 0;
		for (int i = 0; i < points.size(); i++) {

			unordered_map<int, int> record;
			for (int j = 0; j < points.size(); j++) {
				if (j != i)
					record[squareOfDistance(points[i], points[j])]++;
			}

			for (unordered_map<int, int>::iterator iter = record.begin(); iter != record.end(); iter++)
					res += (iter->second) * (iter->second - 1);
		}

		return res;
	}
};

//int main() {
//
//	vector<vector<int>> points = { {0, 0} ,{1, 0}, {2, 0} };
//
//	int ans = Solution().numberOfBoomerangs(points);
//	cout << ans << endl;
//}