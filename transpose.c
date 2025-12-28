#include <stdio.h>

int main()
{
    int amat[10][10], tmat[10][10];
    int i, j, m, n;

    printf("Key in the order m & n for matrix A: ");
    scanf("%d %d", &m, &n);

    printf("\nType in %d elements for matrix A:\n", m * n);
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &amat[i][j]);

    printf("\nGiven matrix A is as follows:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            printf("%4d", amat[i][j]);
        printf("\n");
    }

    // Compute transpose
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            tmat[j][i] = amat[i][j];

    printf("\nTranspose of matrix A is as follows:\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
            printf("%4d", tmat[i][j]);
        printf("\n");
    }

    return 0;
}
