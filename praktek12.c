#include <stdio.h>

char *nama_bulan(int n);

int main()
{
    int bl;
    char *pch;

    printf("Masukkan Bulan 1..12: ");
    scanf("%d", &bl);

    pch = nama_bulan(bl);

    printf("Bulan ke-%d adalah %s\n", bl, pch);

    return 0;
}

char *nama_bulan(int n)
{
    static char *bulan[] = {
        "Kode bulan salah",
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "Nopember",
        "Desember"
    };

    return ((n < 1 || n > 12) ? bulan[0] : bulan[n]);
}