#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>
#include "bubbleSort.h" 

using namespace std;

// start clock high and low to see if it works
int main()
{

	int nums[1000];
	clock_t start, end;
	for (int i = 0; i < 1000; i++)
	{
		nums[i] = rand() % 1000;
	}
	
	int n = sizeof(nums) / sizeof(nums[0]);
	auto startHigh = std::chrono::high_resolution_clock::now();
	start = clock();


	sortBubble(nums, n);
	end = clock();
	auto endHigh = std::chrono::high_resolution_clock::now();

	// created a duration but want to store it in a bubble



	auto diff = endHigh - startHigh;
	cout << "high res = " << diff.count();
	cout << "low res =" << (end - start);

	int nums2[1000];
	for (int i = 0; i < 1000; i++)
	{
		nums[i] = rand() % 1000; 
	}

	n = sizeof(nums) / sizeof(nums[0]);
	//startHigh = std::chrono::high_resolution_clock::();
	
	startHigh = std::chrono::high_resolution_clock::now();
	sortBubble(nums, n);

	sort (nums2, nums2 + n);
	endHigh = std::chrono::high_resolution_clock::now();

	diff = endHigh - startHigh;
	return 0;
}

