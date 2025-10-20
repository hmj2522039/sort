#pragma once

class Sort
{
protected:
	void Swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

public:
	virtual void Exec(int* array, int size) = 0;
	virtual void QuickExec(int* array, int left, int right) = 0;	// クイックソート用の関数
	virtual void CountSort(int array[], int array_size, int digit) = 0;	// 基数ソート用カウントソートの関数
};
