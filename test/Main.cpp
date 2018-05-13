//////////////////////////////////////////////////////////////////////
//
// Main.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

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
