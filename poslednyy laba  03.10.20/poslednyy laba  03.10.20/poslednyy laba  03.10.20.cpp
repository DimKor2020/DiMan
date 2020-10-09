#include <iostream>
using namespace std;

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* begin = array;
    int* end = array + sizeof(array) / sizeof(*array) - 1;

    while (begin < end) {
        *begin ^= *end ^= *begin ^= *end;
        begin++; end--;
    }
    for (const int* p = array; p < array + sizeof(array) / sizeof(*array); p++) {
        cout << *p << " ";
    }
}
