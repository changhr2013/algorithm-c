// sortAlgorithm.h: ��׼ϵͳ�����ļ��İ����ļ�
// ����Ŀ�ض��İ����ļ���

#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		// Ѱ�� [i, n) ���������Сֵ
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
		// j ����Ԫ�� e Ӧ�ò����λ��
		int j;
		// Ѱ��Ԫ�� arr[i] ���ʵĲ���λ��
		for (int j = i; j > 0 && arr[j - 1] > e; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = e;
	}
}