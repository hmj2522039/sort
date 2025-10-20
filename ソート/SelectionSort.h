#pragma once
#include "Sort.h"

// 選択ソート
class SelectionSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;
	void QuickExec(int* array, int left, int right)override
	{
	}
	virtual void CountSort(int array[], int array_size, int digit)override
	{
	}
};
