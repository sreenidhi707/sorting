// Sorts.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "move_to_front_sort.h"

void move_front(vector<int>& arr, int index, int begin_index)
{
	int temp = arr[index];

	for (size_t i = index; i > begin_index; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[begin_index] = temp;
}

void sort(vector<int>& arr, int begin, int end)
{
	if (begin == end)
	{
		return;
	}

	int index_min = begin;
	int index_max = begin;

	for (size_t i = begin + 1; i <= end; i++)
	{
		if (arr[i] > arr[index_max])
		{
			index_max++;
		}
		else if (arr[i] < arr[index_min])
		{
			move_front(arr, i, begin);
			index_max++;
		}
		else if (arr[i] > arr[index_min] && arr[i] < arr[index_max])
		{
			move_front(arr, i, begin);
			index_max++;

			sort(arr, index_min, index_max);
		}
		else
		{
			assert(0);
		}
	}
}

void move_to_front_sort(vector<int>& arr)
{
	sort(arr, 0, arr.size() - 1);
}

