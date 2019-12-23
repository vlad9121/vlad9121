#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <locale.h> 
#include <cmath>

using namespace std;
struct tochki {
	int x5, y5;
};

int main()
{
	setlocale(LC_ALL, "rus");
	  cout << "Задание 1" << endl;
	int i, N, x, l, k, help;
	cout << "Введите число N, равное количеству элементов массива A: " << endl;
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	int* C = new int[N];
	srand(time(0));
	cout << "Элементы массива A: " << endl;
	for (i = 0; i < N; i++) {
		A[i] = rand() % 3;
		cout << A[i] << " ";

	}
	x = l = k = 0;
	for (int i = l; i < N; i++)
	{
		if (A[i + 1] == A[i])
		{
			x++;
		}
		else
		{
			l = x;
			help = A[i];
			l++;
			B[k] = l;
			C[k] = help;
			k++;
			x = 0;
		}
	}
	cout << endl;
	cout << "Массив из длин серий B:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	cout << "Массив из элементов C:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;

	cout << "Задание 2" << endl;
	int i2, N2, l22, l2, k2, x2, j2;
	cout << "Введите число N, равное количеству элементов массива A: " << endl;
	cin >> N2;
	int* A2 = new int[N2];
	int* B2 = new int[N2];
	cout << "Введите число L = " << endl;
	cin >> l2;
	cout << "Элементы массива A: " << endl;
	for (i2 = 0; i2 < N2; i2++) {
		A2[i2] = rand() % 3;
		cout << A2[i2] << " ";

	}
	j2 = 0;
	k2 = 1;
	for (i2 = 0; i2 < N2; i2++) {
		if (A2[i2] == A2[i2 + 1]) {
			k2++;
		}
		else {
			if (k2 <= l2) {
				for (x2 = 0; x2 < k2; x2++) {
					B2[j2] = A2[i2];
					j2++;
				}
			}

			else if (k2 > l2) {
				B2[j2] = 0;
				j2++;


			}
			k2 = 1;
		}
	}

	cout << endl;
	cout << "Изменённые элементы массива A: " << endl;
	for (i2 = 0; i2 < j2 ; i2++) {
		cout << B2[i2] << " ";

	}
	cout << endl;
	
	cout << "Задание 3 " << endl;
	int  N3, i3, j3, K3, x3, y3, z3, help3;
	cout << "Введите значение N, которое будет соответствовать размеру массива: " << endl;
	cin >> N3;
	cout << "Введите номер серии, которую вы хотите поменять с последней, K: " << endl;
	cin >> K3;
	int* A3 = new int[N3];
	int* B3 = new int[N3];
	cout << "Элементы массива A: " << endl;
	for (i3 = 0; i3 < N3; i3++) {
		A3[i3] = rand() % 3;
		cout << A3[i3] << endl;
		
	}
	cout << endl;
	x3 = 1;
	y3 = 0;
	help3 = (K3 == 1 ? 1 : 0);
	j3 = -1;
	for (i3 = 1; i3 < N3; i3++) {
		if (A3[i3 - 1] != A3[i3]) {
			x3++;
			if (x3 == K3) y3 = i3;
			z3 = i3;
		}
		if (x3 == K3) help3++;
	}
	for (i3 = 0; i3 < y3; i3++)  B3[++j3] = A3[i3];

	for (i3 = z3; i3 < N3; i3++) B3[++j3] = A3[i3];

	for (i3 = y3 + help3; i3 < z3; i3++)  B3[++j3] = A3[i3];

	for (i3 = y3; i3 < y3 + help3; i3++)  B3[++j3] = A3[i3];

	for (i3 = 0; i3 < N3; i3++) A3[i3] = B3[i3];
	cout << "Массив после изменений: " << endl;
	for (i3 = 0; i3 < N3; i3++)
	{
		cout << A3[i3] << endl;
	}
	
	cout << "Задание 4 " << endl;
	int  N4, i4, x4, y4, x14, y14;
	double R4, max4 = 0;
	cout << "Введите количество точек: " << endl;
	cin >> N4;
	for (i4 = 0; i4 < N4; i4++) {
		cout << "Введите координаты точки: ";
		cin >> x4 >> y4;
		if (x4 < 0 && y4>0) {
			R4 = sqrt(pow(x4, 2) + pow(y4, 2));
			if (R4 > max4) {
				max4 = R4;
				x14 = x4;
				y14 = y4;
			}
		}
	}
	cout << "Максимально удаленная точка: " << endl;
	if (max4 > 0) {
		cout << "( " << x14 << "; " << y14 << ")" << endl;
	}
	else { 
		cout << "(0; 0) " << endl;
	}
	


	return 0;
}
