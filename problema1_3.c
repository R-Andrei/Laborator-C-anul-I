#include <stdio.h>
#include <math.h>

void main()
{
    int x, y, p;
    double f;
    printf("Introduceti X: ");
    scanf("%d", &x);
    printf("Introduceti Y: ");
    scanf("%d", &y);

    p = pow(x, 2) + pow(y, 2);
    f = (p == 1) ? x + y : (p > 1) ? 1.0 / (p - 1) : 1.0 / (p + 1);
    printf("%.2f\n", f);
}
