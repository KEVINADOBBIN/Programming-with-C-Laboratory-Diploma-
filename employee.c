#include <stdio.h>

struct employee
{
    int empno;
    char name[20];
    int salary;
};

int main()
{
    struct employee emp[20];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Empno: ");
        scanf("%d", &emp[i].empno);
        printf("Empname: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
    }

    printf("\nThe details of employees are:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Empno\t: %d\n", emp[i].empno);
        printf("Name\t: %s\n", emp[i].name);
        printf("Salary\t: %d\n", emp[i].salary);
    }

    return 0;
}
