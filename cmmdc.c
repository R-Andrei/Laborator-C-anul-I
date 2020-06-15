#include <stdio.h>

// Se citesc 2 numere naturale a si b. Sa se afiseze CMMDC al celor doua numere;

void main()
{
    int a, b, rest;

    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    rest = a % b;

    while (rest != 0)
    {
        a = b;
        b = rest;
        rest = a % b;
    }

    printf("%d", b);
}