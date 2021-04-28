///////////////////////////////////////////////////////////////////////////////
//
// MergeSort.h is a source file for LibSort.
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
#include <limits>
#include <vector>

#include <LibSort.h>

namespace LibSort {

template <typename T>
void Merge(std::vector<T>& Array, int left, int middle, int right)
{
  int n1 = middle - left + 1;
  int n2 = right - middle;
  std::vector<T> L(n1 + 1);
  std::vector<T> R(n2 + 1);
  for (int i = 0; i < n1; i++)
  {
    L[i] = Array[left + i];
  }
  for (int j = 0; j < n2; j++)
  {
    R[j] = Array[middle + j + 1];
  }
  L[n1] = std::numeric_limits<int>::max();
  R[n2] = std::numeric_limits<int>::max();
  int i = 0;
  int j = 0;
  for (int k = left; k <= right; k++)
  {
    if (L[i] <= R[j])
    {
      Array[k] = L[i];
      i++;
    }
    else
    {
      Array[k] = R[j];
      j++;
    }
  }
}

template <typename T>
void MergeSort(std::vector<T>& Array, int left, int right)
{
  if (left < right)
  {
    int middle = (left + right) / 2;
    MergeSort(Array, left, middle);
    MergeSort(Array, middle + 1, right);
    Merge(Array, left, middle, right);
  }
}

template <typename T>
void MergeSort(std::vector<T>& Array)
{
  return MergeSort(Array, 0, Array.size() - 1);
}

template <typename T>
void MergeSort(std::vector<T>& Array, clock_t& elapsedTime)
{
  clock_t startTime;
  clock_t stopTime;

  startTime = clock();

  MergeSort(Array);

  stopTime = clock();
  elapsedTime = stopTime - startTime;
}

}  // namespace LibSort