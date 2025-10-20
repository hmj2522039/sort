#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				Swap(array[i], array[j]);
			}
		}
	}
}