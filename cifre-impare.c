#include <stdio.h>

// se citesc 2 numere a si b
// sa se afiseze cel care are cele mai multe numere prime

int cifre_impare(int numar);

void main()
{

    int a, b, counta, countb;

    printf("Dati primul numar: ");
    scanf("%d", &a);
    printf("Dati al doilea numar: ");
    scanf("%d", &b);

    counta = cifre_impare(a);
    countb = cifre_impare(b);

    if (counta == countb)
        printf("Ambele numere au acelasi numar de cifre impare: %d\n", counta);
    else if (counta > countb)
        printf("Numarul cu cele mai multe cifre impare este: %d cu %d cifre.\n", a, counta);
    else
        printf("Numarul cu cele mai multe cifre impare este: %d cu %d cifre.\n", b, countb);
}

int cifre_impare(int numar)
{
    int ultima_cifra;
    int count = 0;

    while (numar > 0)
    {
        ultima_cifra = numar % 10;
        numar = numar / 10;
        if (ultima_cifra % 2 != 0)
            count++;
    }

    return count;
}

// 12345