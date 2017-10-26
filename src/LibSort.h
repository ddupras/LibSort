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
    void MergeSort (std::vector<int> &A, int p, int r);
    void MergeSort (std::vector<int> &A, int p, int r, clock_t &elapsedTime);

    void BubbleSort (std::vector<int> &A);
    void BubbleSort (std::vector<int> &A, clock_t &elapsedTime);

/*
    void ShellSort (std::vector<int> &A);
    void ShellSort (std::vector<int> &A, clock_t &elapsedTime);
*/
} // namespace LibSort