///////////////////////////////////////////////////////////////////////////////
//
// BubbleSort.h is a source file for LibSort.
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

#include <ctime>
#include <string>
#include <vector>

#include <LibSort.h>

namespace LibSort
{
    template<typename T>
    void BubbleSort(std::vector<T> &Array)
    {
        if (Array.size() == 0)
        {
            return;
        }

        for (size_t i = 0; i < Array.size() - 1; i++)
        {
            for (size_t j = Array.size() - 1; j > i; j--)
            {
                if (Array[j] < Array[j - 1])
                {
                    auto temp = Array[j];
                    Array[j] = Array[j - 1];
                    Array[j - 1] = temp;
                }
            }
        }
    }

    template<typename T>
    void BubbleSort(std::vector<T> &Array, clock_t &elapsedTime)
    {
        clock_t startTime;
        clock_t stopTime;

        startTime = clock();

        BubbleSort(Array);

        stopTime = clock();
        elapsedTime = stopTime - startTime;
    }
} // namespace LibSort
