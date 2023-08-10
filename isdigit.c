#include<stdio.h>
#include<ctype.h>

int main()
{
    //int digit=1;
    //char non digit=0;
    
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("%d",isdigit(a));

    

    return 0;
}