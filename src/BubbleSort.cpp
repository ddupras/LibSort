//////////////////////////////////////////////////////////////////////
//
// BubbleSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>

#include "LibSort.h"

namespace LibSort
{

    void BubbleSort (std::vector<std::string> &A)
    {
        if (A.size() == 0)
        {
            return;
        }

        for (size_t i = 0; i < A.size() - 1; i++)
        {
            for (size_t j = A.size() - 1; j > i; j--)
            {
                if (A[j] < A[j - 1])
                {
                    std::string temp = A[j];
                    A[j] = A[j - 1];
                    A[j - 1] = temp;
                }
            }
        }
    }

    void BubbleSort (std::vector<int> &A)
    {
        if (A.size() == 0)
        {
            return;
        }

        for (size_t i = 0; i < A.size() - 1; i++)
        {
            for (size_t j = A.size() - 1; j > i; j--)
            {
                if (A[j] < A[j - 1])
                {
                    int temp = A[j];
                    A[j] = A[j - 1];
                    A[j - 1] = temp;
                }
            }
        }
    }

    void BubbleSort (std::vector<int> &A, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        BubbleSort(A);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }

} // namespace LibSort
