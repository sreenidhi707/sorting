
#include "stdafx.h"
#include "move_to_front_sort.h"


int main()
{
	vector<int> arr;
	arr.push_back(12);
	arr.push_back(14);
	arr.push_back(8);
	arr.push_back(3);
	arr.push_back(9);
	arr.push_back(7);
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(6);

	move_to_front_sort(arr);

	return 0;
}