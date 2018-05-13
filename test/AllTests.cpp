///////////////////////////////////////////////////////////////////////////////
//
// AllTests.cpp is a source file for LibSort.
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

#include <catch.hpp>

#include <iostream>
#include <vector>
#include <string>

#include "LibSort.h"

void DumpVector(std::vector<int> &A)
{
    for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;
}

TEST_CASE("Test sort algorithms", "[sort]")
{
    std::vector<int> Empty{ };
    std::vector<int> Single{ 0 };
    std::vector<int> RepeatedTwo{ 0, 0 };
    std::vector<int> RepeatedThree{ 0, 0, 0 };
    std::vector<int> Ordering_1{ 0, 1 };
    std::vector<int> Ordering_2{ 1, 0 };
    std::vector<int> Ordering_3{ 0, 1, 2 };
    std::vector<int> Ordering_4{ 0, 2, 1 };
    std::vector<int> Ordering_5{ 1, 0, 2 };
    std::vector<int> Ordering_6{ 1, 2, 0 };
    std::vector<int> Ordering_7{ 2, 0, 1 };
    std::vector<int> Ordering_8{ 2, 1, 0 };
    std::vector<int> Ordering_9{ 0, 1, 1 };
    std::vector<int> Ordering_10{ 1, 0, 1 };
    std::vector<int> Ordering_11{ 1, 1, 0 };
    std::vector<int> ForwardOrdering{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> ReverseOrdering{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    std::vector<int> RandomOrdering_1{ 42, 9, 17, 54, 602, -3, 54, 999, -11 };
    std::vector<int> RandomOrdering_2{ -11, -3, 9, 17, 42, 54, 54, 602, 999 };

    int A_values[] = { 93, 41, 52, 26, 38, 57, 9, 49 };
    std::vector<int> A(A_values, A_values + sizeof(A_values) / sizeof(int));

    SECTION("BubbleSort")
    {
        LibSort::BubbleSort(Empty);
        CHECK(std::is_sorted(std::begin(Empty), std::end(Empty)));
        LibSort::BubbleSort(Single);
        CHECK(std::is_sorted(std::begin(Single), std::end(Single)));
        LibSort::BubbleSort(RepeatedTwo);
        CHECK(std::is_sorted(std::begin(RepeatedTwo), std::end(RepeatedTwo)));
        LibSort::BubbleSort(RepeatedThree);
        CHECK(std::is_sorted(std::begin(RepeatedThree), std::end(RepeatedThree)));
        LibSort::BubbleSort(Ordering_1);
        CHECK(std::is_sorted(std::begin(Ordering_1), std::end(Ordering_1)));
        LibSort::BubbleSort(Ordering_2);
        CHECK(std::is_sorted(std::begin(Ordering_2), std::end(Ordering_2)));
        LibSort::BubbleSort(Ordering_3);
        CHECK(std::is_sorted(std::begin(Ordering_3), std::end(Ordering_3)));
        LibSort::BubbleSort(Ordering_4);
        CHECK(std::is_sorted(std::begin(Ordering_4), std::end(Ordering_4)));
        LibSort::BubbleSort(Ordering_5);
        CHECK(std::is_sorted(std::begin(Ordering_5), std::end(Ordering_5)));
        LibSort::BubbleSort(Ordering_6);
        CHECK(std::is_sorted(std::begin(Ordering_6), std::end(Ordering_6)));
        LibSort::BubbleSort(Ordering_7);
        CHECK(std::is_sorted(std::begin(Ordering_7), std::end(Ordering_7)));
        LibSort::BubbleSort(Ordering_8);
        CHECK(std::is_sorted(std::begin(Ordering_8), std::end(Ordering_8)));
        LibSort::BubbleSort(Ordering_9);
        CHECK(std::is_sorted(std::begin(Ordering_9), std::end(Ordering_9)));
        LibSort::BubbleSort(Ordering_10);
        CHECK(std::is_sorted(std::begin(Ordering_10), std::end(Ordering_10)));
        LibSort::BubbleSort(Ordering_11);
        CHECK(std::is_sorted(std::begin(Ordering_11), std::end(Ordering_11)));
        LibSort::BubbleSort(ForwardOrdering);
        CHECK(std::is_sorted(std::begin(ForwardOrdering), std::end(ForwardOrdering)));
        LibSort::BubbleSort(ReverseOrdering);
        CHECK(std::is_sorted(std::begin(ReverseOrdering), std::end(ReverseOrdering)));
        LibSort::BubbleSort(RandomOrdering_1);
        CHECK(std::is_sorted(std::begin(RandomOrdering_1), std::end(RandomOrdering_1)));
        LibSort::BubbleSort(RandomOrdering_2);
        CHECK(std::is_sorted(std::begin(RandomOrdering_2), std::end(RandomOrdering_2)));
        LibSort::BubbleSort(A);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    SECTION("MergeSort")
    {
        LibSort::MergeSort(A, 0, A.size() - 1);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    SECTION("ShellSort")
    {
        LibSort::ShellSort(A);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    SECTION("QuickSort")
    {
        LibSort::QuickSort(A, 0, A.size() - 1);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    SECTION("SelectionSort")
    {
        LibSort::SelectionSort(A);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    SECTION("InsertionSort")
    {
        LibSort::InsertionSort(A);
        CHECK(std::is_sorted(std::begin(A), std::end(A)));
    }

    std::vector<std::string> B = {"red", "blue", "green"};
    SECTION("Sort some strings")
    {
        LibSort::BubbleSort(B);
        CHECK(std::is_sorted(std::begin(B), std::end(B)));
    }
}

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