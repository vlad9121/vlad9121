#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

   float PowerA3(float A, float B) {
    B = pow(A, 3);
    cout << "3 степень числа " << A << " = " << B << endl;
    return B;
       
   }
   float Sign(float X) { 
    if (X < 0) {
        X = -1;
    }
    else if ( X == 0) {
        X = 0;
    }
    else if (X > 0) {
        X = 1;
    }
     return X;  
   }
   float RingS(float R1, float R2) {
      R1 = 3.14 * (R1*R1 - R2*R2);
      cout << "Площадь кольца = " << R1 << endl;
      return R1;
   }
   int Quarter(float x, float y){
       if (x > 0 && y > 0) {
           x = 1;
       }
       else if (x < 0 && y > 0) {
           x = 2;
       }
       else if (x < 0 && y < 0) {
           x = 3;
       }
       else if (x > 0 && y < 0) {
           x = 4;
       }
       return x;
   }
   float Fact2(int N) {
       int i, p;
       p = 1;
     if ((N % 2) == 0) {
         i = 2;
         while (i <= N) {
             p = i * p;
             i = i + 2; 
         }
         
     }
     if ((N % 2 ) != 0) {
         i = 1;
         while (i <= N) {
             p = i * p;
             i = i + 2; 
         }
         
         
     }
     N = p;
     return N;
       
   }
   int main()
{
   cout << "Задание 1" << endl;
   float c, c1, d, d1, e, e1, f, f1, g, g1;
   cout <<"Введите числа, которые нужно возвести в 3 степень: ";
   cin >> c;
   cin >> d;
   cin >> e;
   cin >> f;
   cin >> g;
   PowerA3 (c, c1);
   PowerA3 (d, d1);
   PowerA3 (e, e1);
   PowerA3 (f, f1);
   PowerA3 (g, g1);
   cout << endl;
   cout << "Задание 2" << endl;
   float A, B;
   cout << "Введите значение числа A: ";
   cin >> A;
   cout << "Введите значение числа B: ";
   cin >> B;
   A = Sign(A) + Sign(B);
   cout <<"Значение Sign(A)+Sign(B): " << A << endl;
   cout << "Задание 3" << endl;
   float r11, r22, r111, r222, r1111, r2222;
   cout <<"Введите длину внешнего радиуса первого кольца: ";
   cin >> r11;
   cout <<"Введите длину внутреннего радиуса первого кольца: ";
   cin >> r22;
    RingS(r11, r22);
   cout <<"Введите длину внешнего радиуса второго кольца: ";
   cin >> r111;
   cout <<"Введите длину внутреннего радиуса второго кольца: ";
   cin >> r222;
    RingS(r111, r222);
    cout <<"Введите длину внешнего радиуса третьего кольца: ";
   cin >> r1111;
    cout <<"Введите длину внутреннего радиуса третьего кольца: ";
   cin >> r2222;
    RingS(r1111, r2222);
     cout << "Задание 4" << endl;
     float x, y, x1, y1, x2, y2;
     cout <<"Введите координаты 1 точки: " << endl;
     cout << "x = ";
     cin >> x;
     cout << "y = ";
     cin >> y;
     cout <<"Точка лежит в " << Quarter(x, y) << " четверти"  << endl;
      cout <<"Введите координаты 2 точки: " << endl;
     cout << "x = ";
     cin >> x1;
     cout << "y = ";
     cin >> y1;
     cout <<"Точка лежит в " << Quarter(x1, y1) << " четверти"  << endl;
      cout <<"Введите координаты 3 точки: " << endl;
     cout << "x = ";
     cin >> x2;
     cout << "y = ";
     cin >> y2;
     cout <<"Точка лежит в " << Quarter(x2, y2) << " четверти"  << endl;
   cout << "Задание 5" << endl;
   int N;
   cout << "Введите число, двойной факториал которого нужно найти: ";
   cin >> N;
   cout << "Двойной факториал числа " << N << " = " << Fact2( N);
   
   
   
   

    return 0;
}
