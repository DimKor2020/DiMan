// sortirovka puzirkom.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int* a;
    int size = 100;
    srand(time(0));

    a = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        a[i] = rand();
    }
    int b;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {

                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}