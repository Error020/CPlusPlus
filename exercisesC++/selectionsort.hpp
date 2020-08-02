#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
	{
		int temp = *xp;
		*xp = *yp;
		*yp = temp;
	}

void selectionSort(int arr[], int size)
	{
		int i, j, min_i;
		for (i = 0; i < size-1; i++)
		{
			min_i = i;
			for(j = i+1; j < size; j++)
				if (arr[j] < arr[min_i])
					min_i = j;

			swap(&arr[min_i], &arr[i]);
		}
	}

string sort(int arr[])
	{
		ostringstream os;

		int size = sizeof arr[0];
		selectionSort(arr, size);
		for (int i = 0; i < size; i++)	{
			os << arr[i];
			os << ' ';
		}
		string str(os.str());
		return str;
	}

#endif
