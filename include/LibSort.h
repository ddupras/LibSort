//////////////////////////////////////////////////////////////////////
//
// LibSort.h
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include <vector>
#include <time.h>

namespace LibSort
{
    // Sort methods
    void MergeSort (std::vector<int> &A, int left, int right);
    void MergeSort (std::vector<int> &A, int left, int right, clock_t &elapsedTime);

    void BubbleSort (std::vector<std::string> &A);
    void BubbleSort (std::vector<int> &A);
    void BubbleSort (std::vector<int> &A, clock_t &elapsedTime);

    void ShellSort (std::vector<int> &A);
    void ShellSort (std::vector<int> &A, clock_t &elapsedTime);

    void QuickSort (std::vector<int> &A, int low, int high);
    void QuickSort (std::vector<int> &A, int low, int high, clock_t &elapsedTime);

    void SelectionSort (std::vector<int> &A, int n);
    void SelectionSort (std::vector<int> &A, int n, clock_t &elapsedTime);

    void InsertionSort (std::vector<int> &A);
    void InsertionSort (std::vector<int> &A, clock_t &elapsedTime);

} // namespace LibSort