#include <stdio.h>

#define PIE 3.1415927  // Define constant for pi

int main()
{
    float r, area, circumference;

    printf("Please enter a value for the radius of the circle:\n");
    scanf("%f", &r);

    area = PIE * r * r;
    circumference = 2 * PIE * r;

    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circumference);

    return 0;
}
