#include <stdio.h>

void main()
{
    int cautare, aparitii = 0;
    long long int numar, numar1;
    printf("Numarul in care sa se caute o cifra: \n");
    scanf("%lld", &numar);
    printf("Cifra cautata: \n");
    scanf("%d", &cautare);

    numar1 = numar;

    while (numar1 > 0)
    {
        aparitii += (numar1 % 10 == cautare) ? 1 : 0;
        numar1 /= 10;
    }

    printf("Numar: %lld\nCifra cautata: %d\nNumarul de aparitii: %d\n", numar, cautare, aparitii);
}
