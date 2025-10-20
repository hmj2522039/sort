#include "RadixSort.h"

void RadixSort::CountSort(int array[], int array_size, int digit)
{
	int* sorted_array = new int[array_size];
	int count[10] = { 0 };

	for (int i = 0; i < array_size; i++)
	{
		count[(array[i] / digit) % 10]++;
	}

	for (int i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (int i = array_size - 1; i >= 0; i--)
	{
		sorted_array[count[(array[i] / digit) % 10] - 1] = array[i];
		count[(array[i] / digit) % 10]--;
	}

	for (int i = 0; i < array_size; i++)
	{
		array[i] = sorted_array[i];
	}
	delete[] sorted_array;
}

void RadixSort::Exec(int* array, int size)
{
	int max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max) 
		{
			max = array[i];
		}
	}

	for (int digit = 1; max / digit > 0; digit *= 10)
	{
		CountSort(array, size, digit);
	}

}
