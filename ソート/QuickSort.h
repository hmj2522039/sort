#pragma once
#include "Sort.h"

// �N�C�b�N�\�[�g
class QuickSort : public Sort
{
public:
	void Exec(int* array, int size) override;
	void QuickExec(int* array, int left, int right)override;
	virtual void CountSort(int array[], int array_size, int digit)override
	{
	}
};
