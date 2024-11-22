#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>

#include "bubble.h" 

using namespace std;

#pragma once
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void sortBubble(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}

	}
	

}