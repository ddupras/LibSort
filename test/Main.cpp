///////////////////////////////////////////////////////////////////////////////
//
// Main.cpp is a source file for LibSort.
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

// Use this if you want catch to provide main
#define CATCH_CONFIG_MAIN

// Use this if you want to provide your own main
//#define CATCH_CONFIG_RUNNER

#include <catch.hpp>

/*
int main (int argc, char* argv[])
{
// global setup...
int result = Catch::Session().run(argc, argv);

int A_values[] = { 3, 41, 52, 26, 38, 57, 9, 49 };
std::vector<int> A(A_values, A_values + sizeof(A_values) / sizeof(int));

std::cout << "Merge Sort" << std::endl;

DumpVector(A);

std::cout << "Sorting " << A.size() << " elements." << std::endl;

clock_t sortTime = 0;
LibSort::MergeSort(A, 0, A.size() - 1, sortTime);
//    LibSort::BubbleSort(A, sortTime);
//    LibSort::ShellSort(A, sortTime);

DumpVector(A);

std::cout << "Elapsed Time: " << sortTime << " clock ticks." << std::endl;

std::cout << "Done." << std::endl;
getchar();

// global clean-up...
return (result < 0xff ? result : 0xff);
}
*/
