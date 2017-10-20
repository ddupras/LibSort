//////////////////////////////////////////////////////////////////////
//
// ShellSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>

#include "LibSort.h"

namespace LibSort
{

void ShellSort (std::vector<int> &A)
{
    for (size_t step = A.size() / 2; step > 0; step /= 2)
    {
        for (size_t i = step; i < A.size(); i += 1)
        {
            int temp = A[i];

            size_t j;
            for (j = i; j >= step && A[j - step] > temp; j -= step)
            {
                A[j] = A[j - step];
            }

            A[j] = temp;
        }
    }
}

void ShellSort (std::vector<int> &A, clock_t &elapsedTime)
{
    clock_t startTime;
    clock_t stopTime;

    startTime = clock();

    ShellSort(A);

    stopTime = clock();
    elapsedTime = stopTime - startTime;
}

} // namespace LibSort
