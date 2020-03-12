#include <stdio.h>

void main()
{
    int numere, numere1, numere2, numere3;
    int suma1 = 0, suma2 = 0, suma3 = 0;
    printf("Introduceti un numar. ");
    scanf("%d", &numere);

    numere1 = numere;
    numere2 = numere;
    numere3 = numere;

    // 1 + 2 + 3 + 4 + ...
    while (numere1 > 0)
    {
        suma1 += numere;
        numere1--;
    }

    // 1 + 3 + 5 + ...
    for (int i = 1; (i % 2 == 0) && (i < numere2) || (i % 2 != 0) && (i <= numere2); i += 2)
        suma2 += i;

    // 1 - 2 + 3 - 4 + 5 - ...
    while (numere3 >= 0)
    {
        suma3 += (numere3 % 2 == 0) ? -numere3 : numere3;
        numere3--;
    }

    printf("Suma1 numerelor pana la %d este: %d\n", numere, suma1);
    printf("Suma2 numerelor pana la %d este: %d\n", numere, suma2);
    printf("Suma3 numerelor pana la %d este: %d\n", numere, suma3);
}