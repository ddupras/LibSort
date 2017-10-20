//////////////////////////////////////////////////////////////////////
//
// Main.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

#include "LibSort.h"

void DumpVector (std::vector<int> &A)
{
    for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;
}

int main (int argc, char* argv[])
{
    int A_values[] = { 3, 41, 52, 26, 38, 57, 9, 49 };
    std::vector<int> A(A_values, A_values + sizeof(A_values) / sizeof(int));

    std::cout << "Merge Sort" << std::endl;

    DumpVector(A);

    std::cout << "Sorting " << A.size() << " elements." << std::endl;

    clock_t sortTime = 0;
    LibSort::MergeSort(A, 0, A.size() - 1, sortTime);
//    LibSort::BubbleSort(A, sortTime);

    DumpVector(A);

    std::cout << "Elapsed Time: " << sortTime << " clock ticks." << std::endl;

    std::cout << "Done." << std::endl;
    getchar();

    return 0;
}
