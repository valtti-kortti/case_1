﻿#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	// Инициализация переменных. Инициализация массива с 10 элементами
	int A[10] = { };
	int i;
	int j;
	int a;
	int b = 0;

	// Ввод членов массива
	cout << "Введи значения массива" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << i + 1 << " - ";
		cin >> A[i];
	}

	//Сортировка пузырьком
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (A[j] > A[j + 1])
			{
				a = A[j + 1];
				A[j + 1] = A[j];
				A[j] = a;
			}
		}
	}

	// Отсортированный массив
	for (i = 0; i < 10; i++)
	{
		cout << "A[" << i + 1 << "] = " << A[i] << endl;
	}

	// Сумма значений меньше нуля, так как массив отсортирован мы исключаем первый и последний элементы
	for (i = 1; i < 9; i++)
	{
		if (A[i] < 0)
		{
			b = A[i] + b;
		}
	}
	cout << "SUM = " << b << endl;
}