//////////////////////////////////////////////////////////////////////
//
// QuickSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>
#include <time.h>

#include "LibSort.h"

namespace LibSort
{

    int Partition (std::vector<int> &A, int low, int high)
    {
        int pivot = A[high];    // pivot
        int i = (low - 1);  // Index of smaller element

        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (A[j] <= pivot)
            {
                i++;    // increment index of smaller element
                std::swap(A[i], A[j]);
            }
        }
        std::swap(A[i + 1], A[high]);
        return (i + 1);
    }

    void QuickSort (std::vector<int> &A, int low, int high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[p] is now
            at right place */
            int pi = Partition(A, low, high);

            // Separately sort elements before
            // partition and after partition
            QuickSort(A, low, pi - 1);
            QuickSort(A, pi + 1, high);
        }
    }

    void QuickSort (std::vector<int> &A, int low, int high, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        QuickSort(A, low, high);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }

} // namespace LibSort
