
#include "stdafx.h"

#include <iostream> 
#include <ctime>
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <algorithm>    // std::shuffle




#include "move_to_front_sort.h"



vector<int> get_random_n(int n)
{
	vector<int> temp;

	for (size_t i = 1; i <= n; i++)
	{
		temp.push_back(i);
	}

	// obtain a time-based seed:
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(temp.begin(), temp.end(), std::default_random_engine(seed));

	return temp;
}

void print_array(vector<int>& arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << ", ";
	}

	cout << endl;
}


void test_move_to_front_sort()
{

	for (int i = 10; i < 100; i++)
	{
		vector<int> arr = get_random_n(i);

		cout << "Before sorting array of size " << i << endl;
		print_array(arr);
		clock_t begin = clock();

		move_to_front_sort(arr);
		
		clock_t end = clock();
		double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

		cout << "Afer sorting" << endl;
		cout << "Time Taken is" << elapsed_secs << endl;
		print_array(arr);
	}
}

int main()
{
	test_move_to_front_sort();

	return 0;
}