#include <stdio.h>

int factorial(int val1)
{
    int fact = 1, i;

    for (i = 1; i <= val1; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n, result;

    printf("Enter the number:\n");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d = %d\n", n, result);

    return 0;
}
