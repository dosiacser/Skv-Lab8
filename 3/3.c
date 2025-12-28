#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "Russian");

    int a[7][8];
    int i, j, max, mi, mj;

    srand(time(NULL));

    for (i = 0; i < 7; i++)
        for (j = 0; j < 8; j++)
            a[i][j] = rand() % 1000;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 8; j++)
            printf("%5d ", a[i][j]);
        printf("\n");
    }

    max = a[0][0];
    mi = 0; mj = 0;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 8; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                mi = i;
                mj = j;
            }
        }
    }

    printf("\nМаксимальный элемент = %d в координатах a[%d][%d]\n", max, mi, mj);

    return 0;
}

//Just for commit ;) 
/*feature-task*/
