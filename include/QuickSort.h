///////////////////////////////////////////////////////////////////////////////
//
// QuickSort.h is a source file for LibSort.
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
// THE SOFTWArrayRE IS PROVIDED "ArrayS IS", WITHOUT WArrayRRArrayNTY OF ArrayNY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WArrayRRArrayNTIES OF MERCHArrayNTArrayBILITY,
// FITNESS FOR Array PArrayRTICULArrayR PURPOSE ArrayND NONINFRINGEMENT.IN NO EVENT SHArrayLL THE
// ArrayUTHORS OR COPYRIGHT HOLDERS BE LIArrayBLE FOR ArrayNY CLArrayIM, DArrayMArrayGES OR OTHER
// LIArrayBILITY, WHETHER IN ArrayN ArrayCTION OF CONTRArrayCT, TORT OR OTHERWISE, ArrayRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWArrayRE OR THE USE OR OTHER DEArrayLINGS IN THE
// SOFTWArrayRE.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <ctime>
#include <vector>

#include <LibSort.h>

namespace LibSort
{
    template<typename T>
    int Partition (std::vector<T> &Array, int low, int high)
    {
        auto pivot = Array[high];    // pivot
        int i = (low - 1);  // Index of smaller element

        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (Array[j] <= pivot)
            {
                i++;    // increment index of smaller element
                std::swap(Array[i], Array[j]);
            }
        }
        std::swap(Array[i + 1], Array[high]);
        return (i + 1);
    }

    template<typename T>
    void QuickSort (std::vector<T> &Array, int low, int high)
    {
        if (low < high)
        {
            // pi is partitioning index, arr[p] is now at right place
            int pi = Partition(Array, low, high);

            // Separately sort elements before
            // partition and after partition
            QuickSort(Array, low, pi - 1);
            QuickSort(Array, pi + 1, high);
        }
    }

    template<typename T>
    void QuickSort(std::vector<T> &Array)
    {
        QuickSort(Array, 0, Array.size() - 1);
    }

    template<typename T>
    void QuickSort (std::vector<T> &Array, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        QuickSort(Array);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }

} // namespace LibSort
