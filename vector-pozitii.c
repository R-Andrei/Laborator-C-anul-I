#include <stdio.h>

// se citeste un vector cu n elemente numere intregi, n fiind cel mult egal cu 1000. 
// afisati intai elementele de pe pozitii pare, apoi elementele de pe pozitii impare in ordine inversa
// idexarea vectorului incepe de la 1

void main()
{

    unsigned short int n;

    printf("Alegeti un numar mai mic sau egal cu 1000.\n");
    scanf("%hu", &n);
    while (n > 1000)
    {
        printf("Numarul trebuie sa fie mai mic sau egal cu 1000");
        scanf("%hu", &n);
    }

    unsigned short int A[n + 1];

    // se citesc de la tastatura elementele vectorului
    for (unsigned short int i = 1; i < n + 1; i++)
    {
        printf("Alegeti elementul %hu: ", i);
        scanf("%hu", &A[i]);
    }

    // se afiseaza elementele de pe pozitii pare
    for (int i = 2; i < n + 1; i += 2)
        printf("%hu ", A[i]);
    printf("\n");

    // daca lungimea vectorului e para
    // scadem cu 1 -> devine impara*
    if (n % 2 == 0)
        n--;

    // se afiseaza elementele de pe pozitii impare
    // in ordine descrescatoare de la ultima pozitie impara*
    for (int i = n; i >= 1; i -= 2)
        printf("%hu ", A[i]);
}

