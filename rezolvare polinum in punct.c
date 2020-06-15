#include <stdio.h>
#include <math.h>

int polinom(int coeficienti[], int grad, int valoare);

void main()
{
    int grad, valoare, rezultat;

    printf("Alege gradul polinomului: ");
    scanf("%d", &grad);

    int coeficienti[grad];
    for (int i = grad; i >= 0; i--)
    {
        printf("Alege coeficientul de grad %d: ", i);
        scanf("%d", &coeficienti[i]);
    }

    printf("Alege valoarea pentru care se va rezolva polinomul: ");
    scanf("%d", &valoare);

    rezultat = polinom(coeficienti, grad, valoare);

    printf("Valoarea polinomului in punctul %d este: %d\n", valoare, rezultat);
}

int polinom(int coeficienti[], int grad, int valoare)
{
    int rezultat = coeficienti[0];

    for (int i = grad; i > 0; i--)
        rezultat += coeficienti[i] * pow(valoare, i);

    return rezultat;
}