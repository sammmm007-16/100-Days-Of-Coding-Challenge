#include <stdio.h>

int main()
{
    int n, i, a[100], position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
