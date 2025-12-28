#include <stdio.h>

int main()
{
    int i, pnum, flag = 1;

    printf("Enter the integer value:\n");
    scanf("%d", &pnum);

    if (pnum <= 1)
    {
        printf("Given number %d is not a prime number\n", pnum);
        return 0;
    }

    for (i = 2; i <= pnum / 2; i++)
    {
        if (pnum % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Given number %d is a prime number\n", pnum);
    else
        printf("Given number %d is not a prime number\n", pnum);

    return 0;
}
