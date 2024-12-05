#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <vector>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "Main.h"

using namespace std;

// Implements the Selection Sort algorithm
void sortSelection(vector<int>& arr) {
    int n = arr.size(); // Get the size of the array
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIdx = i; // Assume the current element is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Update minIdx if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIdx]);
    }
}
