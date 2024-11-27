#include "selectionSort.h"
#include <vector>
#include <iostream>
using namespace std;
// smallest element and swaps first unsorted
void sortSelection(vector< int >& arr)

{
	int fred = arr.size();
	int i, j;

	for (i = 0; i < fred - 1; i++)
// Total size of the array
	{
		int a = i;
		for (j = i+1; j < fred; j++)
		{
			if (arr[j] < arr[a])
			{
				a = j;
			}
		}
		swap(arr[i], arr[a]);

	}
	cout << "Array after iteration " << i + 1 << ": ";
	for (int num : arr) cout << num << " ";
	cout << endl;
}
