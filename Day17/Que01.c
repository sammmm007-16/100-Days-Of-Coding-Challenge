#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digits++;
        n = n / 10;
    }

    n = original;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + pow(remainder, digits);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}
