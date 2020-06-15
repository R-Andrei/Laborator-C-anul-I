#include <stdio.h>

void a(int number);
void b(int number);

void main()
{
    int number;

    printf("A: ");
    scanf("%d", &number);

    a(number);
    printf("\n");
    b(number);
}

void a(int number)
{
    if (number < 1)
        printf("Numarul e mai mic decat 1.");
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= i; j++)
            printf("%d ", i);
}

void b(int number)
{
    if (number < 1)
        printf("Numarul e mai mic decat 1.");
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
}