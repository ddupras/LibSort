//////////////////////////////////////////////////////////////////////
//
// Main.cpp
//
// (c) 2015-2017 Derek Dupras, All Rights Reserved.
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <climits>

void DumpVector(std::vector<int> &A);
void MergeSort(std::vector<int> &A, int p, int r);
void Merge(std::vector<int> &A, int p, int q, int r);
void BubbleSort(std::vector<int> &A);

int main(int argc, char* argv[])
{
	int A_values[] = { 3, 41, 52, 26, 38, 57, 9, 49 };
	std::vector<int> A(A_values, A_values + sizeof(A_values) / sizeof(int));

	std::cout << "Merge Sort" << std::endl;

	DumpVector(A);

	std::cout << "Sorting " << A.size() << " elements." << std::endl;

	MergeSort(A, 0, A.size() - 1);

	DumpVector(A);

	std::cout << "Done." << std::endl;
	getchar();

	return 0;
}

void DumpVector(std::vector<int> &A)
{
	for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;
}

