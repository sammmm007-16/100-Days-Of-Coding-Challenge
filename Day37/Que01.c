#include <stdio.h>

int main()
{
    int rows, columns, i, j;
    int a[100][100], sum[100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
