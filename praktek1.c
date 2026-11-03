#include <stdio.h>

int main()
{
    int x = 87, y;
    int *px;

    px = &x;
    y = *px;

    printf("Alamat x        = %p\n", (void*)&x);
    printf("Isi px          = %p\n", (void*)px);
    printf("Isi x           = %d\n", x);
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);
    printf("Nilai y         = %d\n", y);

    return 0;
}

