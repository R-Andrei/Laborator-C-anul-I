#include <stdio.h>
#include <math.h>

double grad1(int a, int b, int *ok);

// Ecuaţia de gradul 1. A*x+B=0;
void main()
{
    int a, b, ok;
    double raspuns;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    printf("Ecuatia este: %dX + %d = 0\n", a, b);

    raspuns = grad1(a, b, &ok);

    if (ok != -1)
        printf("X=%.2f\n", raspuns);
    else
        printf("Ecuatie invalida.\n");
}

double grad1(int a, int b, int *ok)
{
    *ok = (a == 0 || b == 0) ? -1 : 0;
    return (*ok != -1) ? (double)-b / a : *ok;
}