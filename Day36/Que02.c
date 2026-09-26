#include <stdio.h>

int main()
{
    int rows, columns, i, j, sum = 0;
    int a[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
