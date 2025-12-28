#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b, c, disc, r1, r2, rp, im;

    printf("Enter the coefficients of quadratic equation:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation\n");
        return 0;
    }

    disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        printf("The roots are real and distinct\n");
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("r1 = %lf\nr2 = %lf\n", r1, r2);
    }
    else if (disc == 0)
    {
        printf("The roots are real and equal\n");
        r1 = -b / (2 * a);
        printf("r1 = %lf\nr2 = %lf\n", r1, r1);
    }
    else
    {
        printf("The roots are complex\n");
        rp = -b / (2 * a);
        im = sqrt(fabs(disc)) / (2 * a);
        printf("r1 = %lf + i%lf\n", rp, im);
        printf("r2 = %lf - i%lf\n", rp, im);
    }

    return 0;
}
