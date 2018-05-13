///////////////////////////////////////////////////////////////////////////////
//
// QuickSort.cpp is a source file for LibSort.
//
// https://github.com/ddupras/LibSort/
//
// MIT License
//
// Copyright(c) 2015-2018 Derek Dupras
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

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
