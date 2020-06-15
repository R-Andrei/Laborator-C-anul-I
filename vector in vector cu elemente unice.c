#include <stdio.h>

// Se citeste un vector A cu n elemente intregi.
// Sa se transforme in multime prin eliminarea elementelor care se repeta

void main()
{

    // lungimea vectorului
    unsigned short int n;

    // lungimea vectorului unic
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

    // iteram prin tot vectorul initial
    for (int i = 0; i < n; i++)
    {
        // presupunem ca numarul nu exista in multimea B
        int adauga = 1;

        // iteram prin toate numerele din B in functie de marimea m
        for (int j = 0; j < m; j++)

            // daca gasim numarul A[i] exista in B
            if (B[j] == A[i])
            {
                // numarul exista in b si oprim loop-ul
                adauga = 0;
                break;
            }
        
        // daca numarul A[i] nu exista in B
        if (adauga == 1)
        {
            // se adauga in B[m] si se creste m
            B[m] = A[i];
            m++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%hu\n", B[i]);
    }
}