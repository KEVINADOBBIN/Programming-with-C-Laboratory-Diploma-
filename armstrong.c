#include <stdio.h>

int main()
{
    int i, rem, sum, temp;

    printf("Armstrong numbers between 100 and 999 are:\n");

    for (i = 100; i <= 999; i++)
    {
        temp = i;
        sum = 0;

        do
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        while (temp > 0);

        if (i == sum)
            printf("%d\n", i);
    }

    return 0;
}
