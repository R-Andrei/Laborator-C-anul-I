#include <stdio.h>

void main()
{
    long long int numar;
    int suma = 0;
    printf("Introduceti un numar lung.");
    scanf("%lld", &numar);

    while (numar > 1)
    {
        suma += numar % 10;
        numar /= 10;
    }

    printf("Suma cifrelor este: %d\n", suma);
}