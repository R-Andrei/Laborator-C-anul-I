#include <stdio.h>

int prime(int number);

void main()
{
    int a, result;

    printf("A: ");
    scanf("%d", &a);

    result = prime(a);

    printf((result > 0) ? "Number is prime.\n" : "Number is not prime.\n");
}

int prime(int number)
{
    if (number == 1 || number == 2)
        return 1;
    int p = 0;
    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0)
            return 0;
    return 1;
}