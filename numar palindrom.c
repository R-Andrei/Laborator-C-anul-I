#include <stdio.h>

void main()
{
    int number, temp, invers = 0;

    printf("A: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        invers = (invers * 10) + (temp % 10);
        temp /= 10;
    }

    printf((number == invers) ? "Numarul %d este palindrom.\n" : "Numarul %d nu este palindrom.\n", number);
}
