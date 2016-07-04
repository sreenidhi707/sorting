#pragma once

#include<vector>
#include<cassert>
using namespace std;

//You have an array of unique integer numbers and only one operation : 
//MoveToFront(x) that moves given number to the beginning of the array.

//Write a program to sort the array using the minimum possible number of MoveToFront() calls.

void move_front(vector<int>& arr, int index, int begin_index);

void sort(vector<int>& arr, int begin, int end);

void move_to_front_sort(vector<int>& arr);