#include <stdio.h>

int main()
{
    int i, sum = 0, total = 0;

    printf("Numbers divisible by 7 between 100 and 200 are as follows:\n");

    for (i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
            total++;
        }
    }

    printf("\nSum of numbers divisible by 7 is %d", sum);
    printf("\nTotal count of numbers divisible by 7 is = %d", total);
    printf("\nIn the range of 100 and 200\n");

    return 0;
}
