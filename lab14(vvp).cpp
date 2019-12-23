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
    for (i = 1; i <= N; i++) {
         mas[i] = rand() % 10;
         cout << mas[i] << " ";

     }
    for (i = 1; i <= N; i++) {
        if (i >= K && i <= L) {
            s = mas[i] + s;
            q = q + 1;
             }
    }
    cout << endl; 
    cout << "Среднее арифметическое элементов от " << K << " до " << L << " включительно равняется = " << s/q << endl;
        cout<<"Задание 2 " << endl;
    int N1, i1, j, k;
    cout << "Введите число N, которое соответствует размеру массива: ";
    cin >> N1;
    cout << "Элементы массива: " << endl;
    srand(time (0));
    int* mas2 = new int [N1];
    for (i1 = 0; i1 < N1; i1++) {
        mas2[i1] = rand() % 100 ;
        for (j = 0; j < i1; j ++ ) {
            if (mas2[j] == mas2[i1]) {
                i1 = i1-1;
            }
        }
}
         cout << endl;
         for (i1 = 0; i1 < N1; i1++) {
             cout << mas2[i1] << "  ";
         }







    return 0;
}