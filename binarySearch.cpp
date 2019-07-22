#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>
#include "util.h"

using namespace std;

template<typename T>
int binarySearch(T arr[], int n, T target) {

	int l = 0, r = n -1;
	while (l <= r) {
		/*int mid = (l + r) / 2;*/
		int mid = l + (r - l) / 2;
		if (arr[mid] == target)
			return mid;
		if (target > arr[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}

	return -1;
}

template<typename T>
int binarySearch1(T arr[], int n, T target) {

	int l = 0, r = n;
	while (l < r) {
		//int mid = (l + r) / 2;
		int mid = l + (r - l) / 2;
		if (arr[mid] == target)
			return mid;
		if (target > arr[mid])
			l = mid + 1;
		else
			r = mid;
	}

	return -1;
}

int main() {

	int n = pow(10, 7);
	int* data = MyUtil::generateOrderedArray(n);

	clock_t startTime = clock();
	for (int i = 0; i < n; i++)
		assert(i == binarySearch(data, n, i));
	clock_t endTime = clock();

	cout << "Binary Search test complete." << endl;
	cout << "Time cost: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
	return 0;
}