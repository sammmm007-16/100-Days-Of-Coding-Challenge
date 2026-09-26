#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            str[length] = '\0';
            break;
        }

        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s", str);

    return 0;
}
