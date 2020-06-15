#include <stdio.h>

// se citesc elementele unei matrici nxn
// sa se calculeze suma maximelor fiecarei linii

void printmatrix(int n, int lista[n][n]);
int maxim(int n, int lista[n]);

void main()
{
    int n, maxi2 = 0;
    printf("Introduceti lungimea matricii: ");
    scanf("%d", &n);

    int lista[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("Introduceti numarul pentru pozitia %d-%d: ", i + 1, j + 1);
            scanf("%d", &lista[i][j]);
        }
    printf("Matricea construita este: \n");
    printmatrix(n, lista);

    for (int i = 0; i < n; i++)
        maxi2 += maxim(n, lista[i]);

    printf("Suma maximelor este: %d\n", maxi2);
}

int maxim(int n, int lista[n])
{
    int maxim = 0;
    for (int i = 0; i < n; i++)
    {
        if (lista[i] > maxim)
            maxim = lista[i];
    }
    return maxim;
}

void printmatrix(int n, int lista[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", lista[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}