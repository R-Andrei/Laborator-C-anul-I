#include <stdio.h>

// se citeste un numar natural n mai mic decat 65553
// sa se afiseze reprezentarea in baza 2 a numarului. se vor folosi operatori pe biti

void decimal_to_binary1(unsigned int n);
void decimal_to_binary2(unsigned int n);

void main()
{
    unsigned int n;

    printf("Enter an integer in decimal number system\n");
    scanf("%u", &n);

    while (n >= 65553)
    {
        printf("Dati un numar mai mic decat 65553.");
        scanf("%u", &n);
    }

    decimal_to_binary1(n);
    decimal_to_binary2(n);
}

void decimal_to_binary1(unsigned int n)
{
    unsigned int mask = 1 << (sizeof(unsigned int) * 4);

    for (int i = 0; i < sizeof(int) * 4 + 1; i++)
    {
        printf("%u", !!(n & (mask >> i)));
    }
    printf("\n");
}

void decimal_to_binary2(unsigned int n)
{
    int c, result;

    for (c = 16; c >= 0; c--)
    {
        result = n >> c;

        if (result & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}