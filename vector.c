#include <stdio.h>

// Se citeste un vector A cu n (n<=1000) elemente nr naturale. 
// Afisati numarul de perechi de elemente din vector care au suma divizibila cu n.

void main() {

    unsigned short int n;
    unsigned short int perechi = 0;

    printf("Alegeti un numar mai mic sau egal cu 1000.\n");
    scanf("%hu", &n);
    while (n > 1000) {
        printf("Numarul trebuie sa fie mai mic sau egal cu 1000");
        scanf("%hu", &n);
    }

    unsigned short int A[n];

    for (unsigned short int i=0; i<n; i++) {
        printf("Alegeti elementul %hu: ", i+1);
        scanf("%hu", &A[i]);
    }

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++) {
            int s=A[i]+A[j];
            if (s%n==0)
                perechi++;
        }

    printf("Numarul de perechi divizibile cu %hu este %hu.", n, perechi);

}