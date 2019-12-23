#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <locale.h> 

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	 cout << "Задание 1" << endl;
	int i, N;
	cout << "Введите число N, равное количеству элементов массива A: " << endl;
	cin >> N;
	int* A = new int[N];
	srand(time(0));
	cout << "Элементы массива A: " << endl;
	for (i = 0; i < N; i++) {
		A[i] = rand() % 2;
		cout << A[i] << " ";
	}

	int num = 0;
	for (i = 1; i < N; i++) {
		if (A[i] == A[i - 1]) num++;
	}
	cout << endl;

	cout << "num = " << num << endl;

	int* B = new int[N - num];
	int count = 1;
	B[0] = A[0];
	for (i = 1; i < N; i++) {
		if (A[i] != A[i - 1]) {
			B[count] = A[i];
			count++;
		}
	}

	cout << endl;
	cout << "Элементы массива A после удаления повторяющихся соседних элементов : " << endl;
		for (i = 0; i < N-num; i++) {
			cout << B[i] << " ";
		}
		cout << endl;
		cout << "Задание 2" << endl;
		int N2, i2, j2, help2;
		cout << "Введите число N, равное количеству элементов массива A: " << endl;
		cin >> N2;
		int* A2 = new int[N2];
		cout << "Элементы массива A: " << endl;
		for (i2 = 0; i2 < N2; i2++) {
			cin >> A2[i2];
		}
		help2 = 0;
		cout << endl;
		int count2 = 0;
		for (i2 = 0; i2 < N2; i2++)
		{
			for (j2 = 0; j2 < N2; j2++)
			{
				if (A2[i2] == A2[j2])
				{
					count2++;
					help2 = j2;
				}
			}
			if (count2 == 2)
			{
				for (j2 = help2; j2 < N2 - 1; j2++)
				{
					A2[j2] = A2[j2 + 1];
				}
				N2--;
				for (j2 = i2; j2 < N2 - 1; j2++)
				{
					A2[j2] = A2[j2 + 1];
				}
				N2--;
				i2--;
			}
			count2 = 0;
		}
		cout << endl;
		cout << "Массив после преобразований: " << endl;
		int* B2 = new int[N2];
		for (i2 = 0; i2 < N2; i2++) {
			B2[i2] = A2[i2];

			cout << B2[i2] << " ";
			cout << endl;
		}
		cout << "Задание 3" << endl;
		int i3, j3, max3, min3, N3, imax3, imin3, help3;
		max3 = -500000;
		min3 = 500000;
		cout << "Введите число N, равное количеству элементов массива A: " << endl;
		cin >> N3;
		int* A3 = new int[N3];
		cout << "Элементы массива A: " << endl;
		for (i3 = 0; i3 < N3; i3++) {
			cin >> A3[i3];
		}
		for (i3 = 0; i3 < N3; i3++) {
			if (A3[i3] >= max3) {
				max3 = A3[i3];
				imax3 = i3;
			}
			if (A3[i3] <= min3) {
				min3 = A3[i3];
				imin3 = i3;
			}
		}
		int* B3 = new int[N3 + 2];
		cout << endl;
		if (imin3 < imax3) {
			for (i3 = 0; i3 < imin3; i3++) {
				B3[i3] = A3[i3];
}
			B3[imin3] = 0;
			for (i3 = imin3 + 1; i3 < imax3+1; i3++) {
				B3[i3] = A3[i3 - 1];

		}
			B3[imax3 + 1] = 0;
			for (i3 = imax3 + 2; i3 < N3 + 2; i3++) {
				B3[i3] = A3[i3 - 2];
		}
	}
		else {
			for (i3 = 0; i3 < imax3; i3++) {
				B3[i3] = A3[i3];
			}
			B3[imax3] = 0;
			for (i3 = imax3 + 1; i3 < imin3 + 1; i3++) {
				B3[i3] = A3[i3 - 1];

			}
			B3[imin3 + 1] = 0;
			for (i3 = imin3 + 2; i3 < N3 + 2; i3++) {
				B3[i3] = A3[i3 - 2];
			}

		}
		cout << "Массив после преобразований: " << endl;
		for (i3 = 0; i3 < N3 + 2; i3++) {

			cout << B3[i3] << " ";
			cout << endl;
		}
		
		cout << "Задание 4" << endl;
		int i4, N4, count4, j4;
		count4 = 0;
		cout << "Введите число N, равное количеству элементов массива A: " << endl;
		cin >> N4;
		int* A4 = new int[N4];
		cout << "Элементы массива A: " << endl;
		for (i4 = 0; i4 < N4; i4++) {
			cin >> A4[i4];
			if (A4[i4] < 0) {
				count4 = count4 + 1;
			}
		}
		cout << "count4 = " << count4 << endl;
		int* B4 = new int[N4 + count4];
		for (int i4 = 0, j4 = 0; i4 < N4 + count4; i4++, j4++) {
			if (A4[j4] < 0) {
				B4[i4] = A4[j4];
				i4++;
				B4[i4] = 0;
			}
			else
			{
				B4[i4] = A4[j4];
			}
		}

		cout << "Массив после преобразований: " << endl;
		for (i4 = 0; i4 < N4 + count4; i4++) {

			cout << B4[i4] << " ";
			cout << endl;
		}
		
		cout << "Задание 5" << endl;
		int i5, N5, j5;
		int count5 = 0;
		cout << "Введите число N, равное количеству элементов массива A: " << endl;
		cin >> N5;
		int* A5 = new int[N5];
		cout << "Элементы массива A: " << endl;
		for (i5 = 0; i5 < N5; i5++) {
			cin >> A5[i5];
			if (A5[i5] > 0) {
				count5 = count5 + 1;
			}
		}
		cout << "count5 = " << count5 << endl;
		int* B5 = new int[N5 + count5];
		for (int i5 = 0, j5 = 0; i5 < N5 + count5; i5++, j5++) {
			if (A5[j5] > 0) {
				B5[i5] = 0;
				i5++;
				B5[i5] = A5[j5];
			}
			else
			{
				B5[i5] = A5[j5];
			}
		}
		cout << "Массив после преобразований: " << endl;
		for (i5 = 0; i5 < N5 + count5; i5++) {

			cout << B5[i5] << " ";
			cout << endl;
		}
		

	

		
	



			


	

	return 0;
}