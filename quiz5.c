#include<stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number");
    scanf("%d", &num);

    printf("%d ", num); 
    do{
         printf("%d", index);
         index= index+1;


    }while( index<num);
    return 0;
}