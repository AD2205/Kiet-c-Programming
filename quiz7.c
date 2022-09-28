#include<stdio.h>

int main()
{
    printf("Ayush is a good boy\n");
 int i, age;
 for( i=0; i<10; i++)
{
 printf("%d\n Enter your age\n", i);
 scanf("%d", &age);
 
 if(age<10)
   continue;
}
printf("we have not come across any continue statements");
printf("Ayush is a good man");
    return 0;
}
