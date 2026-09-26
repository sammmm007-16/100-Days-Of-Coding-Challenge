#include <stdio.h>

int main()
{
    int n, first, last, digits = 1, middle, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        power = power * 10;
    }

    first = n;

    middle = (n * power);

    result = last * power + middle;

    printf("Number after swapping = %d", result);

    return 0;
}
