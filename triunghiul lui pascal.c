#include <stdio.h>
#include <math.h>

void binomial(int n);
int combination(int k, int n);
int factorial(int n);

void main()
{
    int n;

    printf("Introduceti gradul polinomului: ");
    scanf("%d", &n);

    binomial(n);
}

int factorial(int n)
{
    int total = 1;
    while (n > 0)
    {
        total *= n;
        n--;
    }
    return total;
}

int combination(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void binomial(int n)
{
    int coef;
    for (int k = 0; k <= n; k++)
    {
        coef = combination(n, k);
        printf((k == 0) ? "%dx^%d" : " + %dx^%d", coef, k);
    }
    printf("\n");
}