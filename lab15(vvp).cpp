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
  int i, N, vspom;
  cout << "Введите число N, равное количеству элементов массива A и массива B " << endl;
  cin >> N;
  int* A = new int[N];
  int* B = new int[N];
  srand(time(0));
  cout << "Элементы массива A: " << endl;
  for (i = 0; i < N; i++) {
          A[i] = rand() % 10;
          cout << A[i] << " ";

  }
  cout << endl;
  cout << "Элементы массива B: " << endl;
  for (i = 0; i < N; i++) {
          B[i] = rand() % 10;
          cout << B[i] << " ";

  }
  cout << endl;
  cout << "Элементы массива A: " << endl;
  for (i = 0; i < N; i++) {
          vspom = A[i];
          A[i] = B[i];
          B[i] = vspom;
          cout << A[i] << " ";

  }
  cout << endl;
  cout << "Элементы массива B: " << endl;
  for (i = 0; i < N; i++) {
          cout << B[i] << " ";

  }
  cout << endl;
  cout << "Задание 2" << endl;
  int N2, i2, k, sum;
  cout << "Введите число N, которое будет соответствовать размеру массива A:" << endl;
  cin >> N2;
  int* A2 = new int[N2];
  int* B2 = new int[N2];
  sum = 0;
  k = 0;
  B2[0] = rand() % 10;
  cout << "Элементы массива A: " << endl;
  for (i2 = 0; i2 < N2; i2++) {
          A2[i2] = rand() % 10;
          cout<< A2[i2] << " ";

  }
  cout << endl;
  cout << "Элементы массива B: " << endl;
  for (i2 = 1; i2 < N2; i2++) {
          sum = sum + A2[i2];
          k = k + 1;
          B2[i2] = sum / k;
  }
  for (i2 = 0; i2 < N2; i2++) {
          cout << B2[i2] << " ";
  }
  cout << endl;
  cout << "Задание 3" << endl;
  int N3, i3, e;
  cout << "Введите число N, которое будет соответствовать размеру массива: " << endl;
  cin >> N3;
  int* A3 = new int[N3];
  cout << "Элементы массива: " << endl;
  for (i3 = 0; i3 < N3; i3++) {
          A3[i3] = rand() % 10;
          cout << A3[i3] << " ";

  }
  cout << endl;
  cout << "Элементы массива после преобразований: " << endl;
  for (i3 = N3 - 1; i3 > 0; i3--) {
          if (A3[i3] % 2 != 0) {
                  e = A3[i3];
                  break;
          }
  }
          for (i3 = 0; i3 < N3; i3++) {
                  if (A3[i3] % 2 != 0) {
                          A3[i3] = A3[i3] + e;
                  }
                  cout << A3[i3] << " ";



  }
          cout << endl;
          cout << "Задание 4" << endl;
          int i4, N4, max, min, imax, imin;
          min = 5000;
                max = -5000;
          cout << "Введите число N, которое будет соответствовать размеру массива: " << endl;
          cin >> N4;
          int* A4 = new int[N4];
          cout << "Введите элементы массива(учтите, что они не должны повторяться): " << endl;
          for (i4 = 0; i4 < N4; i4++) {
                  cin >> A4[i4];

          }
          for (i4 = 0; i4 < N4; i4++) {
                  if (A4[i4] > max) {
                          imax = i4;
                          max = A4[i4];
                  }
                  }
          for (i4 = 0; i4 < N4; i4++) {
                  if (A4[i4] < min) {
                          imin = i4;
                          min = A4[i4];
                  }
          }

          cout << "imax: " << imax << endl;
          cout << "imin: " << imin << endl;
          cout << "Изменённые элементы массива:" << endl;
          if (imin < imax) {
                  for (i4 = imin + 1; i4 < imax; i4++) {
                          A4[i4] = 0;



                  }
          }
          else if (imin > imax) {
                  for (i4 = imax + 1; i4 < imin; i4++) {
                          A4[i4] = 0;
                  }


          }
          for (i4 = 0; i4 < N4; i4++) {

                  cout << A4[i4] << endl;
          }
                  cout << "Задание 5" << endl;
                  int N5, i5, zapas;
                  cout << "Введите значение N, которое будет соответствовать размеру массива:" << endl;
                  cin >> N5;
                  int* A5 = new int[N5];
                  cout << "Введите элементы массива(учтите, что элементы кроме первого должны идти в порядке возрастания, счёт начинается с нулевого элемента): " << endl;
                  for (i5 = 0; i5 < N5; i5++) {
                          cin >> A5[i5];

                  }
                  cout << "Изменённый порядок элементов: " << endl;
                  if (A5[1] < A5[0]) {
                          zapas = A5[0];
                        A5[0] = A5[1];
                          A5[1] = zapas;
                          cout << "Элементы массива после преобразования: " << endl;
                          for (i5 = 0; i5 < N5; i5++) {
                                  cout << A5[i5] << " ";

                          }
                  }
                  else {
                          for (i5 = 2; i5 < N5; i5++) {
                                  if (A5[i5] < A5[i5 - 1]) {
                                          zapas = A5[i5];
                                          A5[i5] = A5[i5-1];
                                          A5[i5-1] = zapas;


                                  }

                          }
                          cout << "Элементы массива после преобразования: " << endl;
                          for (i5 = 0; i5 < N5; i5++) {
                                  cout << A5[i5] << " ";

                          }
                  }










  return 0;
}
