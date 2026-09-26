#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("%d", i);

    return 0;
}
