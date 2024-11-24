#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>

#include "bubble.h" 


using namespace std;

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

	std::chrono::duration<double> diff = endHigh - startHigh;
	cout << "high res = " << diff.count();
	cout << "low res =" << (end - start);

	int nums2[1000];
	for (int i = 0; i < 1000; i++)
	{
		nums[i] = rand() % 1000;
	}

	int n = sizeof(nums) / sizeof(nums[0]);
	//startHigh = std::chrono::high_resolution_clock::();




	auto startHigh = std::chrono::high_resolution_clock::now();
	sort(nums, nums2 + n);
	auto endHigh = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> diff = endHigh - startHigh;
	return 0;
}

