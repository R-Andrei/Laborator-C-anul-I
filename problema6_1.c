#include <stdio.h>

int suma(int numere[], int lungime);
int maxim(int numere[], int lungime);

void main()
{
    int lungime, sum, max;

    printf("Alege numarul de numere din lista: ");
    scanf("%d", &lungime);

    int numere[lungime];
    for (int i = 0; i < lungime; i++)
    {
        printf("Alege numarul %d: ", i + 1);
        scanf("%d", &numere[i]);
    }

    sum = suma(numere, lungime);
    max =  maxim(numere, lungime);
    printf("Suma numerelor este: %d\nMaximul este: %d\n", sum, max);
}

int suma(int numere[], int lungime)
{
    int suma = 0;
    for (int i = 0; i < lungime; i++)
        suma += numere[i];

    return suma;
}

int maxim(int numere[], int lungime)
{
    int maxim = 0;
    for (int i = 0; i < lungime; i++)
        if (numere[i] > maxim)
            maxim = numere[i];
    return maxim;
}