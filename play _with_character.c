#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[50];
    char stat[100];
    
    scanf("%c",&ch);
    scanf("\n");
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]s",stat);
   
    printf("%c",ch);
    printf("\n");
    printf("%s",s);
    printf("\n");
    printf("%s",stat);
    return 0;
}
