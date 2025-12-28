#include <stdio.h>

int main()
{
    float snum, num[50];
    int i, n, pos = 0;

    printf("How many numbers to be searched?: ");
    scanf("%d", &n);

    printf("Enter %d numbers one by one:\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &num[i]);

    printf("Type in the key number to be searched for a match: ");
    scanf("%f", &snum);

    for (i = 0; i < n; i++)
    {
        if (num[i] == snum)
        {
            pos = i + 1;   // position starts from 1
            break;
        }
    }

    if (pos == 0)
    {
        printf("Search failure!\n");
        printf("Given key number %.2f not found in the array.\n", snum);
    }
    else
    {
        printf("Given key number %.2f is found at location %d in the array\n", snum, pos);
        printf("Therefore successful search!\n");
    }

    return 0;
}
