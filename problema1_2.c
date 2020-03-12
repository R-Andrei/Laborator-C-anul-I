#include <stdio.h>
#include <math.h>

// Se dau 3 numere naturale A,B,C. Să se scrie schema logică pentru calculul mediei aritmetice, armomice şi geometrice;
void main()
{
    int a, b, c;

    printf("Introduceti A: ");
    scanf("%d", &a);
    printf("Introduceti B: ");
    scanf("%d", &b);
    printf("Introduceti C: ");
    scanf("%d", &c);

    float MA, MG, MH;

    // Media aritmetica
    MA = (double)(a + b + c) / 3;
    printf("Media aritmetica este: %.2f\n", MA);

    // Media geometrica
    MG = pow((double)(a * b * c), 1.0 / 3);
    printf("Media geometrica este: %.2f\n", MG);

    // Media armonica
    if (a == 0 || b == 0 || c == 0)
        printf("Impartire la 0 nu este posibila.\n");
    else
    {
        MH = 3.0 / (1.0 / a + 1.0 / b + 1.0 + c);
        printf("Media armonica: %.2f\n", MH);
    }
}
