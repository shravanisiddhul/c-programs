#include<stdio.h>
#include<ctype.h>

int main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("A++");
    }   
    else if(marks<90 && marks>75)
    {
        printf("A+\n");
    }
    else{
        printf("A");
    }
       

    return 0;
}
