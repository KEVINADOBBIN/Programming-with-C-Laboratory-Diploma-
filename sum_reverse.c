#include <stdio.h>

int main()
{
    int n, m, sum = 0, rev = 0;

    printf("Enter the number:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        rev = rev * 10 + m;
        n = n / 10;
    }

    printf("Sum = %d\n", sum);
    printf("Rev = %d\n", rev);

    return 0;
}
