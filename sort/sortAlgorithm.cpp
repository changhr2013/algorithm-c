// sortAlgorithm.cpp: 定义应用程序的入口点。

#include "sortAlgorithm.h"
#include "Student.h"
#include "SortTestHelper.h"

using namespace std;

int main()
{
	int n = 100000;

	int* arr = SortTestHelper::generateRandomArray(n, 0, n);
	int* arr2 = SortTestHelper::copyIntArray(arr, n);

	int* arr3 = SortTestHelper::generateNearlyOrderedArray(n, 100);

	int* arr4 = SortTestHelper::copyIntArray(arr3, n);

	//selectionSort(arr, n);

	SortTestHelper::testSort("Selection Sort", selectionSort, arr3, n);

	SortTestHelper::testSort("Insertion Sort", insertionSort, arr4, n);

	//SortTestHelper::printArray(arr, n);

	delete[] arr;
	delete[] arr2;
	delete[] arr3;
	delete[] arr4;

	cin.get();
}
