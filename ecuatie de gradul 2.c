#include <stdio.h>
#include <math.h>

double grad1(int a, int b, int *ok);
double *grad2(int a, int b, int c, int *ok);

// Ecuaţia de gradul 2. A*x^2+B*x+C=0;
void main()
{
    int a, b, c, ok;
    double *response;
    printf("Introduceti A: ");
    scanf("%d", &a);
    printf("Introduceti B: ");
    scanf("%d", &b);
    printf("Introduceti C: ");
    scanf("%d", &c);

    response = grad2(a, b, c, &ok);
    if (ok != -1)
        printf("X1=%.2f\nX2=%.2f\n", response[0], response[1]);
    else
        printf("Ecuatie nerezolvabila.\n");
}

double grad1(int a, int b, int *ok)
{
    *ok = (a == 0 || b == 0) ? -1 : 0;
    return (*ok != -1) ? (double)-b / a : *ok;
}

double *grad2(int a, int b, int c, int *ok)
{
    double delta;
    static double response[2];

    delta = (a == 0) ? grad1(b, c, &*ok) : pow(b, 2) + 4 * a * c;

    if (a == 0)
    {
        response[0] = delta;
    }
    else
    {
        *ok = (delta < 0) ? -1 : -0;
        response[0] = (-b + pow(delta, 1.0 / 2)) / (2 * a);
        response[1] = (b + pow(delta, 1.0 / 2)) / (2 * a);
    }
    return response;
}