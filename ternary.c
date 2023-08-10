#include<stdio.h>
#include<ctype.h>

int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);

   age>=18 ? printf("Adult\n") : printf("Child\n");
    
    return 0;
}
