#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    cout<<"������� 1 " << endl;
    int N, i, K, L, s, q;
    cout << "������� ����� N, ������� ����� ��������������� ������� �������: ";
    cin >> N;
    cout << "������� ����� K = ";
    cin >> K;
    cout << "������� ����� L = ";
    cin >> L;
    s = 0;
    q = 0;
    srand(time (0));
        int* mas = new int [N];
         cout << "�������� �������: " << endl;
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
    cout << "������� �������������� ��������� �� " << K << " �� " << L << " ������������ ��������� = " << s/q << endl;
        cout<<"������� 2 " << endl;
    int N1, i1, j, k;
    cout << "������� ����� N, ������� ������������� ������� �������: ";
    cin >> N1;
    cout << "�������� �������: " << endl;
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