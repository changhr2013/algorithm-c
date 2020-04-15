// sort.cpp: 定义应用程序的入口点。
//

#include "sort.h"

using namespace std;

/* 选择排序 */
void selectionSortJ(jint arr[], jint n) {

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
