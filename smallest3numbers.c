#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        printf("\nSmallest number = %d\n", a);
    }
    else if (b <= a && b <= c)
    {
        printf("\nSmallest number = %d\n", b);
    }
    else
    {
        printf("\nSmallest number = %d\n", c);
    }
    return 0;
}
