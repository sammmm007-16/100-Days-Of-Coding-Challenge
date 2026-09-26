#include <stdio.h>

int main()
{
    int rows, columns, i, j;
    int a[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", a[j][i]);
        }

        printf("\n");
    }

    return 0;
}
