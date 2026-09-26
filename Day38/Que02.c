#include <stdio.h>

int main()
{
    int n, i, j, a[100][100], flag = 1;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
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
