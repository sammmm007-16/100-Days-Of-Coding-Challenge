#include <stdio.h>

int main()
{
    int rows, columns, i, j, k;
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

    for (k = 0; k < rows + columns - 1; k++)
    {
        for (i = 0; i < rows; i++)
        {
            j = k - i;

            if (j >= 0 && j < columns)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
