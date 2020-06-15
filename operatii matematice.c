#include <stdio.h>
#include <math.h>

// Se citesc doua numere intregi A si B. Sa se calculeze si sa se afiseze suma, diferenta, produsul si catul celor 2 numere.
int main()
{
    int a, b;
    int suma, diferenta, produs;
    float cat;
    printf("Introduceti A: ");
    scanf("%d", &a);
    printf("Introduceti B: ");
    scanf("%d", &b);

    // Suma a + b
    suma = a + b;
    printf("Suma numerelor este: %d\n", suma);

    // Diferenta a - b
    diferenta = a - b;
    printf("Diferenta intre numere este: %d\n", diferenta);

    // Produsul a * b
    produs = a * b;
    printf("Suma numerelor este: %d\n", produs);

    // Cat
    if (b == 0)
    {
        printf("Nu se poate imparti la 0.");
    }
    else
    {
        cat = (double)a / b;
        printf("Diferenta intre numere este: %f\n", cat);
    }
    return 0;
}