#include <stdio.h>

void naikkan_nilai(int *, int *);

int main()
{
    int a = 3, b = 7;

    printf("SEMULA: a = %d b = %d\n", a, b);

    naikkan_nilai(&a, &b);

    printf("KINI: a = %d b = %d\n", a, b);

    return 0;
}

void naikkan_nilai(int *x, int *y)
{
    *x = *x + 2;
    *y = *y + 2;
}