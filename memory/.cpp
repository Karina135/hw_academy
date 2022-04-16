#include <iostream>
#include <ctime>
#include <algorithm>
#include "Matrix.h"
using namespace std;

void f() {
    int* p = new int[100'000];
    int a = -1000;
    int b = 1000;
    for (int i = 0; i < 100'000; i++) {
        p[i] = a + rand() % (b - a + 1);
    }

    sort(p, p + 100'000);
    for(int i = 0; i < 100; i++)
        cout<<'\n';
        for (int i = 0; i < 100; i++)
            cout << p[i] << ' ';
        cout << '\n';
        
        delete[] p;

}

int main()
{
    srand(time(0));
    int** matrix = createMatrix(10, 20);
    fill(matrix, 10, 20);
    print (matrix, 10, 20);
    destroyMatrix(matrix);

}
