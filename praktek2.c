#include <stdio.h>

int main()
{
    int *pu;
    int nu;
    int u = 1234;

    pu = &u;
    nu = *pu;

    printf("Alamat dari u = %p\n", (void *)&u);
    printf("Isi pu = %p\n", (void *)pu);
    printf("Isi u = %d\n", u);
    printf("Nilai yang ditunjuk oleh pu = %d\n", *pu);
    printf("Nilai nu = %d\n", nu);

    return 0;
}