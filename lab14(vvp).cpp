#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    cout<<"Задание 1 " << endl;
    int N, i, K, L, s, q;
    cout << "Введите число N, которое будет соответствовать размеру массива: ";
    cin >> N;
    cout << "Введите число K = ";
    cin >> K;
    cout << "Введите число L = ";
    cin >> L;
    s = 0;
    q = 0;
    srand(time (0));
        int* mas = new int [N];
         cout << "Элементы массива: " << endl;
    for (i = 0; i < N; i++) {
         mas[i] = rand() % 10;
         cout << mas[i] << " ";

     }
    for (i = 0; i < N; i++) {
        if (i >= K && i <= L) {
            s = mas[i] + s;
            q = q + 1;
             }
    }
    cout << endl; 
    cout << "Среднее арифметическое элементов от " << K << " до " << L << " включительно равняется = " << s/q << endl;
        cout<<"Задание 2 " << endl;
    int N1, i1, j, d;
    cout << "Введите число N, которое соответствует размеру массива: ";
    cin >> N1;
    cout << "Элементы массива: " << endl;
    int* mas2 = new int [N1];
    for (i1 = 0; i1 < N1; i1++) {
        mas2[i1] = rand() % 100 ;
        for (j = 0; j < i1; j ++ ) {
            if (mas2[j] == mas2[i1]) {
                i1 = i1-1;
            }
        }
}
         for (i1 = 0; i1 < N1; i1++) {
             cout << mas2[i1] << "  ";
         }

         d = mas2[1] - mas2[0];
         for (i1 = 2;  i1 < N1; i1++) {
             if (mas2[i1] - mas2[i1-1] != d) {
                 d = 0;
             }
             else {
                 d = mas2[i1] - mas2[i1-1];
             }
         }
         cout << endl;
         cout << "Ответ: ";
         cout << d << endl;
          cout<<"Задание 3 " << endl;
          int N3, i3, min;
          cout << "Введите количество элементов массива N: ";
          cin >> N3;
          cout << "Элементы массива: " << endl;
          min = 5000;
           int* A = new int [N3];
           for (i3 = 0; i3 < N3; i3++) {
        A[i3] = rand() % 100 ;
           cout << A[i3] << "  ";
           }
            for (i3 = 2; i3 < N3; i3+=2) {
                if (A[i3] < min) {
                    min = A[i3];
                }
            }
            cout << endl;
            cout << "Минимальный элемент из элементов с чётными номерами равен: " << min << endl;
            cout<<"Задание 4 " << endl;
            int N4, i4, max;
            max = 0;
            cout << "Введите количество элементов массива N: ";
            cin >> N4;
            int* local = new int [N4];
            cout << "Элементы массива: " << endl;
           for (i4 = 0; i4 < N4; i4++) {
        local[i4] = rand() % 100 ;
           cout << local[i4] << "  ";
           }
           for (i4 = N4 - 2; i4 > 1; i4--) {
               if ((local[i4] > local[i4-1]) && (local[i4] > local[i4+1])) {
                   max = i4;
                   break;
               }

           }
           cout << endl;
           cout << "Номер последнего локального максимума = " << i4 << endl;
            cout<<"Задание 5 " << endl;
            int i5, j5, N5, sov;
            cout << "Введите количество элементов массива N: ";
            cin >> N5;
            cout << "Введите элементы массива так, чтобы существовало два равных элемента" << endl;
            cout << "Элементы массива: " << endl;;
            int* last = new int [N5];
            for (i5 = 0; i5 < N5; i5++) {
                cin >> last[i5];
            }
             for (i5 = 0; i5 < N5; i5++) {
        for (j5 = 0; j5 < i5; j5++ ) {
            if (last[j5] == last[i5]) {
                sov = i5;
            }
        }
}
cout << "Больший номер одного из равных элементов = " << sov;







    return 0;
}
