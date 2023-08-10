#include<stdio.h>
#include<ctype.h>

int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age > 18)
    {
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can drive");
    }
        
    else
    {
        printf("Not Adult\n");
        printf("They cannot vote\n");
        printf("They cannot drive");
    }    

    return 0;
}
