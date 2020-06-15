#include <stdio.h>

void fib1(int numar);
void fib2(int numar);

void main()
{
    int numar;
    printf("Lungimea sirului Fibonacci: \n");
    scanf("%d", &numar);
    fib1(numar);
    fib2(numar);
}

void fib1(int numar)
{
    int temp, count = 1, start = 1, pos = 0;
    int sir[(numar <= 4) ? numar : numar / 2];

    while (count <= numar)
    {
        sir[pos] = count;
        pos++;
        temp = start;
        start = count;
        count += temp;
    }

    for (int i = 0; i < pos; i++)
        printf("%d. %d\n", i + 1, sir[i]);
}

void fib2(int numar)
{
    int temp, count = 1, start = 1;
    int sir[numar];

    for (int i = 0; i < numar; i++)
    {
        sir[i] = count;
        temp = start;
        start = count;
        count += temp;
    }

    for (int i = 0; i < numar; i++)
        printf("%d. %d\n", i + 1, sir[i]);
}
