#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);



    switch (age)
    {
    case 3:
        printf("The age is 8\n");
        break;

        case 13:
        printf("The age is 13\n");
        break;

        case 45:
        printf("The age is 45\n");
     break;


    default:
    printf("Age is not 8, 13, 45");
        break;
    }
    return 0;
}
