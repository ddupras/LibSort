//////////////////////////////////////////////////////////////////////
//
// SelectionSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>
#include <time.h>

#include "LibSort.h"

namespace LibSort
{

    void SelectionSort (std::vector<int> &A, int n)
    {
        int i, j, min_idx;

        // One by one move boundary of unsorted subarray
        for (i = 0; i < n - 1; i++)
        {
            // Find the minimum element in unsorted array
            min_idx = i;
            for (j = i + 1; j < n; j++)
                if (A[j] < A[min_idx])
                    min_idx = j;

            // Swap the found minimum element with the first element
            std::swap(A[min_idx], A[i]);
        }
    }

    void SelectionSort (std::vector<int> &A, int n, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        SelectionSort(A, n);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }

} // namespace LibSort
