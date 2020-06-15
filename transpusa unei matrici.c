#include <stdio.h>
#include <math.h>

void transpose(int row, int col, int matrix[row][col]);

void main()
{
    int x, y;

    printf("Numarul de randuri: ");
    scanf("%d", &x);
    printf("Numarul de coloane: ");
    scanf("%d", &y);

    int matrix[x][y], inverse[y][x];

    for (int row = 0; row < x; row++)
        for (int col = 0; col < y; col++)
        {
            printf("Pick number for position %d-%d: ", row + 1, col + 1);
            scanf("%d", &matrix[row][col]);
        }

    transpose(x, y, matrix);
}

void transpose(int row, int col, int matrix[row][col])
{
    int transpose[col][row];

    for (int x = 0; x < row; x++)
        for (int y = 0; y < col; y++)
        {
            transpose[y][x] = matrix[x][y];
        }

    for (int y = 0; y < col; y++)
    {
        for (int x = 0; x < row; x++)
            printf("%d ", transpose[y][x]);
        printf("\n");
    }
}
