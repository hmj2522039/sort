#pragma once
#include "Sort.h"

// �o�u���\�[�g
class BubbleSort : public Sort
{
public:
	void Exec(int* array, int size) override;

	void QuickExec(int* array, int left, int right)override
	{
	}
	void CountSort(int array[], int array_size, int digit)override
	{
	}

};
