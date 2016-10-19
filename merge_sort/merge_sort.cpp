// merge_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <vector>
#include <climits>

void DumpVector (std::vector<int> &A);
void MergeSort (std::vector<int> &A, int p, int r);
void Merge (std::vector<int> &A, int p, int q, int r);
void BubbleSort (std::vector<int> &A);

int _tmain(int argc, _TCHAR* argv[])
{
	int A_values[] = {3, 41, 52, 26, 38, 57, 9, 49};
	std::vector<int> A (A_values, A_values + sizeof(A_values) / sizeof(int) );

	std::cout << "Merge Sort" << std::endl;

	DumpVector(A);

	std::cout << "Sorting " << A.size() << " elements." << std::endl;

	//MergeSort(A, 0, A.size() - 1);
	BubbleSort(A);

	DumpVector(A);

	std::cout << "Done." << std::endl;
	getchar();

	return 0;
}

void DumpVector (std::vector<int> &A)
{
	for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;
}

void MergeSort (std::vector<int> &A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		std::cout << "Sorting " << p << " to " << q << std::endl;
		MergeSort(A, p, q);
		std::cout << "Sorting " << q+1 << " to " << r << std::endl;
		MergeSort(A, q + 1, r);
		std::cout << "Merging " << p << ", " << q << ", " << r << std::endl;
		Merge(A, p, q, r);
		DumpVector(A);
	}
}

void Merge (std::vector<int> &A, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	std::vector<int> L(n1 + 1);
	std::vector<int> R(n2 + 1);
	for (int i = 0; i < n1; i++)
	{
		L[i] = A[p + i];
	}
	for (int j = 0; j < n2; j++)
	{
		R[j] = A[q + j + 1];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	int i = 0;
	int j = 0;
	for (int k = p; k <= r; k++)
	{
		DumpVector(A);
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
	}
}

void BubbleSort (std::vector<int> &A)
{
	for (int i = 0; i < A.size() - 2; i++)
	{
		for (int j = A.size() - 1; j > i + 1; j--)
		{
			if (A[j] < A[j - 1])
			{
				int temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}
}