#include <stdio.h>
#include <math.h>

int derivare(int coef, int *grad);
int rezolvare(int grad, int valoare, int polinom[grad + 1], int graduri[grad + 1]);
void listare(int grad, int polinom[grad + 1], int graduri[grad + 1]);

void main()
{
    int grad, ordin, x;
    long long int rezolvare_p, rezolvare_d;

    printf("Alege gradul polinomului: ");
    scanf("%d", &grad);
    int polinom[grad + 1], derivata[grad + 1], graduri_p[grad + 1], graduri_d[grad + 1];

    for (int i = 0; i <= grad; i++)
    {
        printf("> coeficientul pentru x^%d: ", grad - i);
        scanf("%d", &polinom[i]);
        graduri_p[i] = grad - i;
        graduri_d[i] = grad - i;
        derivata[i] = polinom[i];
    }
    printf("Alege ordinul de derivare: ");
    scanf("%d", &ordin);
    while (ordin < 1 || ordin >= grad)
    {
        printf("(Ordinul de derivare trebuie sa fie intre 1 si %d): ", grad);
        scanf("%d", &ordin);
    }
    printf("Valoarea pentru care sa se rezolve: ");
    scanf("%d", &x);

    for (int i = 0; i < ordin; i++)
        for (int j = 0; j <= grad; j++)
            if (graduri_d[j] >= 0)
                derivata[j] = derivare(derivata[j], &graduri_d[j]);

    rezolvare_p = rezolvare(grad, x, polinom, graduri_p);
    rezolvare_d = rezolvare(grad, x, derivata, graduri_d);

    printf("f(x) = "); listare(grad, polinom, graduri_p);
    printf("D^%d f(x) = ", ordin); listare(grad, derivata, graduri_d);
    printf("f(%d) = %lld\n", x, rezolvare_p);
    printf("D^%d f(%d) = %lld\n", ordin, x, rezolvare_d);
}

int derivare(int coef, int *grad)
{
    int temp_grad = *grad;
    *grad = *grad - 1;
    if (temp_grad < 1)
        return 0;
    return coef * temp_grad;
}

int rezolvare(int grad, int valoare, int polinom[grad + 1], int graduri[grad + 1])
{
    long long int raspuns = 0;
    for (int i = 0; i <= grad; i++)
        raspuns += (graduri[i] > 0) ? pow(polinom[i] * valoare, graduri[i]) : (graduri[i] == 0) ? polinom[i] * valoare : 0;
    return raspuns;
}

void listare(int grad, int polinom[grad + 1], int graduri[grad + 1])
{
    for (int i = 0; i <= grad; i++)
    {
        if (polinom[i] == 0)
            continue;
        else if (graduri[i] >= 0)
        {
            if (i != 0)
                printf(" + ");
            printf((graduri[i] != 0) ? "(%dx^%d)" : "(%d)", polinom[i], graduri[i]);
        }
    }
    printf("\n");
}