///////////////////////////////////////////////////////////////////////////////
//
// SelectionSort.h is a source file for LibSort.
//
// https://github.com/ddupras/LibSort/
//
// MIT License
//
// Copyright(c) 2015-2021 Derek Dupras
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
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
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <ctime>
#include <vector>

#include <LibSort.h>

namespace LibSort {

template <typename T>
void SelectionSort(std::vector<T>& Array)
{
  int n = Array.size();

  // One by one move boundary of unsorted subarray
  for (int i = 0; i < n - 1; i++)
  {
    // Find the minimum element in unsorted array
    int min_index = i;
    for (int j = i + 1; j < n; j++)
      if (Array[j] < Array[min_index])
        min_index = j;

    // Swap the found minimum element with the first element
    std::swap(Array[min_index], Array[i]);
  }
}

template <typename T>
void SelectionSort(std::vector<T>& Array, clock_t& elapsedTime)
{
  clock_t startTime;
  clock_t stopTime;

  startTime = clock();

  SelectionSort(Array);

  stopTime = clock();
  elapsedTime = stopTime - startTime;
}

}  // namespace LibSort
