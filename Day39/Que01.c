#include <stdio.h>

int main()
{
    int rows, columns, i, j;
    int a[100][100], flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
