//////////////////////////////////////////////////////////////////////
//
// MergeSort.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <vector>
#include <climits>

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

void MergeSort(std::vector<int> &A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r);
    }
}
