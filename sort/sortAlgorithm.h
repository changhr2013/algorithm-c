// sortAlgorithm.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		// 寻找 [i, n) 区间里的最小值
		int minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

template<typename T>
void insertionSort(T arr[], int n) {
	for (int i = 1; i < n; i++)
	{
		T e = arr[i];
		// j 保存元素 e 应该插入的位置
		int j;
		// 寻找元素 arr[i] 合适的插入位置
		for (int j = i; j > 0 && arr[j - 1] > e; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = e;
	}
}