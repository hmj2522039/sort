#include "QuickSort.h"


void QuickSort::Exec(int* array, int size)
{
	QuickExec(array, 0, size - 1);
}

void QuickSort::QuickExec(int* array, int left, int right)
{
	int Left;
	int Right;
	int pivot;	// äÓèÄíl

	Left = left;
	Right = right;

	pivot = array[(left + right) / 2];

	while (1)
	{
		while (array[Left] < pivot) Left++;	// ç∂Ç©ÇÁå©Ç¬ÇØÇÈ

		while (pivot < array[Right]) Right--;	// âEÇ©ÇÁå©Ç¬ÇØÇÈ

		if (Left >= Right) break;

		Swap(array[Left], array[Right]);

		Left++;
		Right--;
	}

	if (left < Left - 1)
	{
		QuickExec(array, left, Left - 1);
	}

	if (Right + 1 < right)
	{
		QuickExec(array, Right + 1, right);
	}
}