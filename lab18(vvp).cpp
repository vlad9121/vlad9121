using namespace std;

#include <iostream> 
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	/*
	cout << "Задание 1" << endl;
	int M, i, j, k;
	cout << "Введите порядок матрицы M: ";
	cin >> M;
	int** A = new int* [M];
	srand(time(0));
	cout << "Элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		A[i] = new int[M];
		for (j = 0; j < M; j++) {
			A[i][j]= rand() % 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Вывод: " << endl;
	for (k = 0; k < (M / 2 + 1); k++) {
		for (i = k; i < M - k; i++) {
				cout << A[i][k] << "\t";
		}
		i--;
		for (j = k + 1; j < M - k; j++) {
			cout << A[i][j] << "\t";
		}
		j--;
		for (i = M - k - 2; i >= k; i--)
		{
			cout << A[i][j] << "\t";
		}
		i++;
		for (j = M - k - 2; j > k; j--)
		{
			cout << A[i][j] << "\t";
		}
		j++;

	}
	cout << endl;
	
	cout << "Задание 2" << endl;
	int M2, N2, i2, j2, k2, sum2, pr2;
	sum2 = 0;
	pr2 = 1;
	cout << "Введите число строк массива M: ";
	cin >> M2;
	cout << "Введите число столбцов массива N: ";
	cin >> N2;
	int** A2 = new int* [M2];
	cout << "Элементы массива: " << endl;
	for (i2 = 0; i2 < M2; i2++) {
		A2[i2] = new int[N2];
		for (j2 = 0; j2 < N2; j2++) {
			A2[i2][j2] = rand() % 10;
			cout << A2[i2][j2] << " ";
		}
		cout << endl;
	}
	cout << "Введите номер строки K(учитывайте, что нумерация начинается с 0), сумму и произведение элементов которой вы хотите найти: " << endl;
	cin >> k2;
	for (i2 = k2, j2 = 0; j2 < N2; j2++) {
		pr2 = pr2 * A2[i2][j2];
		sum2 = sum2 + A2[i2][j2];
	}
	cout << "Произведение элементов " << k2 << " строки равно " << pr2 << endl;
	cout << "Сумма элементов " << k2 << " строки равно " << sum2 << endl;
	cout << "Задание 3" << endl;
	int M3, N3, i3, j3, k3, naimpr3, imin3, pr3;
	imin3 = 0;
	pr3 = 1;
	cout << "Введите число строк массива M: ";
	cin >> M3;
	cout << "Введите число столбцов массива N: ";
	cin >> N3;
	int** A3 = new int* [M3];
	cout << "Элементы массива: " << endl;
	for (i3 = 0; i3 < M3; i3++) {
		A3[i3] = new int[N3];
		for (j3 = 0; j3 < N3; j3++) {
			A3[i3][j3] = rand() % 10;
			cout << A3[i3][j3] << " ";
		}
		cout << endl;
	}
	for (i3 = 0; i3 < 1; i3++) {
		for (j3 = 0; j3 < N3; j3++) {
			naimpr3 = A3[i3][j3] * pr3;
		}
	}
		imin3 = 0;

	for (i3 = 1; i3 < M3; i3++) {
		for (j3 = 0; j3 < N3; j3++) {
			pr3 = A3[i3][j3] * pr3;
		}
		if (pr3 < naimpr3) {
			imin3 = i3;
			naimpr3 = pr3;
		}
		
	}
	cout << "Номер строки с наименьшим произведением элементов: " << imin3 << endl;
	cout << "Произведение этих элементов равно: " << naimpr3 << endl;
cout << "Задание 4" << endl;
int M4, N4, i4, j4, k4, q4, sum4;
sum4 = 0;
q4 = 0;
double sr4 = 0;
cout << "Введите число строк массива M: ";
cin >> M4;
cout << "Введите число столбцов массива N: ";
cin >> N4;
int** A4 = new int* [M4];
cout << "Элементы массива: " << endl;
for (i4 = 0; i4 < M4; i4++) {
	A4[i4] = new int[N4];
	for (j4 = 0; j4 < N4; j4++) {
		A4[i4][j4] = rand() % 10;
		cout << A4[i4][j4] << " ";
	}
	cout << endl;
}
for (j4 = 0; j4 < N4; j4++) {
	for (i4 = 0; i4 < M4; i4++) {
		sum4 = sum4 + A4[i4][j4];
	}
	sr4 = sum4 / M4;
	for (k4 = 0; k4 < M4; k4++) {
		if (A4[k4][j4] > sr4) {
			q4++;
		}
	}
	cout << "Среднее арифметическое " << j4 << " столбца равно: " << sr4 << endl;
	cout << "Количество элементов в столбце, большее среднего аримфетического равно: " << q4 << endl;
	q4 = 0;
	sr4 = 0;
	sum4 = 0;
}
*/
cout << "Задание 5" << endl;
int M5, N5, i5, j5, k5, q5, j5n;
q5 = 0;
j5n = 0;
cout << "Введите число строк массива M: ";
cin >> M5;
cout << "Введите число столбцов массива N: ";
cin >> N5;
int** A5 = new int* [M5];
cout << "Элементы массива: " << endl;
for (i5 = 0; i5 < M5; i5++) {
	A5[i5] = new int[N5];
	for (j5 = 0; j5 < N5; j5++) {
		A5[i5][j5] = rand() % 10;
		cout << A5[i5][j5] << " ";
	}
	cout << endl;
}
for (j5 = 0; j5 < N5; j5++) {
	for (i5 = 0; i5 < M5; i5++) {
		if (A5[i5][j5] % 2 == 0) {
			q5++;

		}
		else {
			break;
		}
	}
		if (q5 == M5) {
			j5n = j5;
			break;
		}
		else {
			q5 = 0;
		}
}
cout << j5n;




	return 0;
}