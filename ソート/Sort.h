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
	virtual void QuickExec(int* array, int left, int right) = 0;	// �N�C�b�N�\�[�g�p�̊֐�
	virtual void CountSort(int array[], int array_size, int digit) = 0;	// ��\�[�g�p�J�E���g�\�[�g�̊֐�
};
