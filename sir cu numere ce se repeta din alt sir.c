#include <stdio.h>

// Se da un sir de n numere intregi.
// Sa se creeze un al doilea sir doar cu numerele ce se repeta in primul sir.
// Elementele apar o singura data in cel de-al doilea sir.

void main()
{
    unsigned short int n;
    unsigned short int m = 0;

    printf("Alegeti lungimea vectorului: ");
    scanf("%hu", &n);

    // definim vectorul initial + vectorul unic
    unsigned short int A[n], B[n];

    // citim de la tastatura elementele vectorului initial
    for (unsigned short int i = 0; i < n; i++)
    {
        printf("Alegeti elementul %hu: ", i + 1);
        scanf("%hu", &A[i]);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (A[i] == A[j] && i != j)
            {
                int adauga = 1;
                for (int k = 0; k < m; k++)
                    if (A[j] == B[k])
                    {
                        adauga = 0;
                        break;
                    }
                if (adauga == 1)
                {
                    B[m] = A[j];
                    m++;
                }
                break;
            }

    for (int i = 0; i < m; i++)
        printf("%hu ", B[i]);
}