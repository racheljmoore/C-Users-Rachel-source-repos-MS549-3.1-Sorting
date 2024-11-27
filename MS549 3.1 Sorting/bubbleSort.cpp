#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>

#include "bubbleSort.h" 

using namespace std;

#pragma once

// using the star identifies values not pointers
// need to make sure to take off the semi colons for the code that has been copied over
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// i was automatically an integer and so was j - just because? history defined it
void sortBubble(int arr[], int n)
// pair the loops with the first and the second and the third (4 loop)
{
	// the i is the biggest last number so we can leave it alone		
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
// now we can compare with j
// in C++ if statements have to be in () 
		for (j = 0; j < n - i - 1; j++)
		{		
			if(arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);






			}
		}

	}
	

}