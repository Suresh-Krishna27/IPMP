//https://www.geeksforgeeks.org/find-the-two-numbers-with-odd-occurences-in-an-unsorted-array/

#include <bits/stdc++.h>
using namespace std;
void printTwoOdd(int arr[], int size)
{
	unordered_map<int, int> m;
	for (int i = 0; i < size; i++) {
		m[arr[i]]++;
	}
	cout << "The two ODD elements are ";
	for (auto& x : m) {
		if (x.second % 2 != 0)
			cout << x.first << ", ";
	}
}

int main()
{
	int arr[] = { 4, 2, 4, 5, 2, 3, 3, 1 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printTwoOdd(arr, arr_size);
	return 0;
}
