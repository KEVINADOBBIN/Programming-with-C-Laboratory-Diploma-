#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);

    printf("The values before swapping:\n");
    printf("a = %d\t b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Values after swapping:\n");
    printf("a = %d\t b = %d\n", a, b);

    return 0;
}
