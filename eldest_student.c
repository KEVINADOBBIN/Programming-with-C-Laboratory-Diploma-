#include <stdio.h>

struct student
{
    int rno;
    char class1[10];
    int age;
};

// Function prototype
int eldest(struct student std[], int n);

int main()
{
    int i, sr;
    struct student std[5];

    printf("Type in 5 student details (roll number, class, age):\n");

    for (i = 0; i < 5; ++i)
    {
        printf("Student %d:\n", i + 1);
        scanf("%d %s %d", &std[i].rno, std[i].class1, &std[i].age);
    }

    printf("\nAll student details:\n");
    printf("Roll No\tClass\tAge\n");
    for (i = 0; i < 5; ++i)
        printf("%d\t%s\t%d\n", std[i].rno, std[i].class1, std[i].age);

    // Find eldest
    sr = eldest(std, 5);

    printf("\nEldest student details in this class:\n");
    printf("Roll No\tClass\tAge\n");
    printf("%d\t%s\t%d\n", std[sr].rno, std[sr].class1, std[sr].age);

    return 0;
}

// Function to find the index of the eldest student
int eldest(struct student std[], int n)
{
    int senior_age = std[0].age;
    int position = 0;
    for (int k = 1; k < n; ++k)
    {
        if (std[k].age > senior_age)
        {
            senior_age = std[k].age;
            position = k;
        }
    }
    return position;
}
