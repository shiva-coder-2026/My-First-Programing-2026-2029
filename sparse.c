#include <stdio.h>

int main()
{
    int a[10][10], sparse[100][3];
    int i, j, r, c, k = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = a[i][j];

                k++;
                sparse[0][2]++;
            }
        }
    }

    printf("\nOriginal Matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSparse Matrix (Triplet Form):\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n",
               sparse[i][0],
               sparse[i][1],
               sparse[i][2]);
    }

    return 0;
}
