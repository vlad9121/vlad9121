#include <math.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N, i; 
    cout << "Задание 1" << endl;
    cout << "Введите число N, которое будет соответствовать размеру массива: ";
    cin >> N;
    int* mas = new int [N];
    mas [0] = -1;
    for (i = 1; i <= N; i++) {
        mas[i] = mas[i-1]+2;
        cout << mas [i] << endl;
    }
cout << "Задание 2" << endl;
    int N1, i1, A, D;
    cout << "Введите число N, которое будет соответствовать количеству элементов массива: ";
    cin >> N1;
    cout << "Введите первый член геометрической прогрессии A = ";
    cin >> A;
    cout << "Введите знаменатель геометрической прогрессии D = ";
    cin >> D;
    int* mas1 = new int [N1];
    for (i1 = 0; i1 < N1; i1++) {
        mas1[i1] = A * pow(D, i1);
        cout << mas1 [i1] << endl;
        
    }
    cout << "Задание 3" << endl;
    int N2, i2, A3, B, S;
     cout << "Введите число N, которое будет соответствовать количеству элементов массива: ";
    cin >> N2;
    cout << "Введите число A, первый член массива: ";
    cin >> A3;
    cout << "Введите число B, второй член массива: ";
    cin >> B;
     int* mas2 = new int [N2];
     mas2[1] = A3;
     mas2[2] = B;
     cout << mas2[1] << endl;
     cout << mas2[2] << endl;
     S = A3 + B;
     
     for (i2 = 2; i2 < N2; i2++) {
         mas2[i2] = S;
         S = mas2[i2] + S;
         cout << mas2[i2] << endl;
         
     }
     cout << "Задание 4" << endl;
     int N3, i3, e, o;
     e = 1;
     o = 0;
    cout << "Введите число N, которое будет соответствовать количеству элементов массива: ";
    cin >> N3;
    int* masA = new int [N3];
    cout << "Элементы массива: " << endl;
    for (i3 = 0; i3 < N3; i3++) {
         masA[i3] = rand() % 10;
         cout << masA[i3] << " ";
         
     }
     cout << endl;
     cout << "Вывод в изменённом порядке: " << endl;
      for (i3 = 0; i3 < N3; i3++) {
       if (i3 % 2 == 0) {
           cout << masA[i3 - o] << " ";
           o = o + 1;
           
       }
       else {
           cout << masA[N3 - e] << " ";
           e = e + 1;
       }
     }
     cout << endl;
     cout << "Задание 5" << endl;
    int N4, i4; 
     cout << "Введите число N, которое будет соответствовать количеству элементов массива: ";
     cin >> N4;
     int* masA2 = new int [N4];
     cout << "Элементы массива: " << endl;
    for (i4 = 1; i4 <= N4; i4++) {
         masA2[i4] = rand() % 10;
         cout << masA2[i4] << " ";
         
     }
     cout << endl;
     cout << "Изменённый порядок элементов массива: " << endl;
      for (i4 = 1; i4 <= N4; i4++) {
         if (i4 % 2 != 0) {
             cout << masA2[i4] << " ";
             
         }
         
     }
     for (i4 = N4; i4 >= 1; i4--) {
         if (i4 % 2 == 0) {
             cout << masA2[i4] << " ";
         }
         
     }
     
    
    
 


 

    return 0;
}