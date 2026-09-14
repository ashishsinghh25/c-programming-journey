// DAY2 - if else and user input

#include <stdio.h>

int main()
{
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("your eligible for voting");
    }
    else
    {
        printf("your not eligible for voting");
    }
    return 0;
}