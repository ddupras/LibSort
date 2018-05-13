//////////////////////////////////////////////////////////////////////
//
// InsertionSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>
#include <time.h>

#include "LibSort.h"

namespace LibSort
{

    void InsertionSort (std::vector<int> &A)
    {
        int i, j, key;

        for (j = 1; j < (int)A.size(); j++)
        {
            key = A[j];

            // Insert A[j] into the sorted sequence A[1..j-1]
            i = j - 1;
            while ((i >= 0) && (A[i] > key))
            {
                A[i + 1] = A[i];
                i = i - 1;
            }
            A[i + 1] = key;
        }
    }

    void InsertionSort (std::vector<int> &A, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        InsertionSort(A);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }

} // namespace LibSort
