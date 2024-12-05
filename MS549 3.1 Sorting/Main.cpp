#include "bubbleSort.h"
#include "selectionSort.h"
#include <algorithm>
#include <chrono>
#include <ctime>
#include <iostream>
#include <vector>
#include <random>



using namespace std;
using namespace chrono;

// start clock high and low to see if it works
int main() {
    int bubbleTest1[100];
    int bubbleTest2[1000];
    int bubbleTest3[10000];
    int bubbleTest4[100000];
    // Seed for random numbers
    srand(static_cast<unsigned int>(time(nullptr)));

    // Fill array with random numbers
    int i;

    for (i = 0; i < 100; i++)
    {
        bubbleTest1[i] = rand() % 100;
    }

    for (i = 0; i < 1000; i++)
    {
        bubbleTest2[i] = rand() % 1000;
    }

    for (i = 0; i < 10000; i++)
    {
        bubbleTest3[i] = rand() % 10000;
    }

    for (i = 0; i < 100000; i++)
    {
        bubbleTest4[i] = rand() % 100000;
    }

    // (Bubble test 1)
    int n = sizeof(bubbleTest1) / sizeof(bubbleTest1[0]);
    // start clock

    auto startHigh = high_resolution_clock::now();

    // run sort
    sortBubble(bubbleTest1, n);

    // end clock
    auto endHigh = high_resolution_clock::now();

    // calculate diff
    auto diff = endHigh - startHigh;

    // output results
    cout << "BubbleSort with 100 items: " << diff.count() << " nanoseconds" << endl;

    // (bubble test 2)
    n = sizeof(bubbleTest2) / sizeof(bubbleTest2[0]);

    startHigh = high_resolution_clock::now();

    sortBubble(bubbleTest2, n);

    endHigh = high_resolution_clock::now();

    diff = endHigh - startHigh;

    cout << "BubbleSort with 1000 items: " << diff.count() << " nanoseconds" << endl;


    // (bubble test 3)
    n = sizeof(bubbleTest3) / sizeof(bubbleTest3[0]);

    startHigh = high_resolution_clock::now();

    sortBubble(bubbleTest3, n);

    endHigh = high_resolution_clock::now();

    diff = endHigh - startHigh;

    cout << "BubbleSort with 10000 items: " << diff.count() << " nanoseconds" << endl;


    // (bubble test 4)
    n = sizeof(bubbleTest4) / sizeof(bubbleTest4[0]);

    startHigh = high_resolution_clock::now();

    // sortBubble(bubbleTest4, n);


    endHigh = high_resolution_clock::now();

    diff = endHigh - startHigh;

    cout << "BubbleSort with 100000 items: " << diff.count() << " nanoseconds" << endl;
    cout << "below sort";
    // define selection sort array

    vector<int> selectionTest1 = {};
    vector<int> selectionTest2 = {};
    vector<int> selectionTest3 = {};
    vector<int> selectionTest4 = {};

    for (i = 0; i < 100; i++)
    {
        selectionTest1.push_back(rand() % 100);
    }
    for (i = 0; i < 1000; i++)
    {
        selectionTest2.push_back(rand() % 1000);
    }
    for (i = 0; i < 10000; i++)
    {
        selectionTest3.push_back(rand() % 10000);
    }
    for (i = 0; i < 100000; i++)
    {
        selectionTest4.push_back(rand() % 100000);
    }
    // start selection sort test (selectionsort1)
    startHigh = high_resolution_clock::now();
    sortSelection(selectionTest1);
    endHigh = high_resolution_clock::now();
    diff = endHigh - startHigh;

    cout << "Selection Sort with 100 items: " << diff.count() << " nanoseconds" << endl;
    // start selection sort test (selectionsort2)
    startHigh = high_resolution_clock::now();
    sortSelection(selectionTest2);
    endHigh = high_resolution_clock::now();
    diff = endHigh - startHigh;
    cout << "Selection Sort with 1000 items: " << diff.count() << " nanoseconds" << endl;
    // start selection sort test (selectionsort3)
    startHigh = high_resolution_clock::now();
    sortSelection(selectionTest3);
    endHigh = high_resolution_clock::now();
    diff = endHigh - startHigh;
    cout << "Selection Sort with 10000 items: " << diff.count() << " nanoseconds" << endl;

    // start selection sort test (selectionsort4)
    startHigh = high_resolution_clock::now();
    sortSelection(selectionTest4);
    endHigh = high_resolution_clock::now();
    diff = endHigh - startHigh;
    cout << "Selection Sort with 100000 items: " << diff.count() << " nanoseconds" << endl;
    cout << "End of tests" << endl;
}
