//////////////////////////////////////////////////////////////////////
//
// MergeSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>
#include <climits>
#include <time.h>

#include "LibSort.h"

namespace LibSort
{

void Merge (std::vector<int> &A, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;
    std::vector<int> L(n1 + 1);
    std::vector<int> R(n2 + 1);
    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = A[middle + j + 1];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    for (int k = left; k <= right; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void MergeSort (std::vector<int> &A, int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;
        MergeSort(A, left, middle);
        MergeSort(A, middle + 1, right);
        Merge(A, left, middle, right);
    }
}

void MergeSort(std::vector<int> &A, int left, int right, clock_t &elapsedTime)
{
    clock_t startTime;
    clock_t stopTime;

    startTime = clock();

    MergeSort(A, left, right);

    stopTime = clock();
    elapsedTime = stopTime - startTime;
}

} // namespace LibSort