#pragma once
#include "Sort.h"

// Šî”ƒ\[ƒg
class RadixSort : public Sort
{
public:
	void Exec(int* array, int size) override;
	void QuickExec(int* array, int left, int right)override
	{
	}
	void CountSort(int array[], int array_size, int digit) override;
};

