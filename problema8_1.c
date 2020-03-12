#include <stdio.h>
#include <math.h>

int pown(int n);

void main()
{
    int numar10;

    printf("Introduceti un numar: ");
    scanf("%d", &numar10);

    unsigned int mask = 1u << pown(numar10);
    while (mask ^ 0)
    {
        if ((numar10 & mask) == 0)
            printf("0");
        else
            printf("1");
        mask = mask >> 1;
    }
}

int pown(int n)
{
    int twos = 0;
    while (n ^ 1)
    {
        twos++;
        n >>= 1;
    }
    return twos;
}
