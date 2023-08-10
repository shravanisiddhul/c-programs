#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c",& ch);
   
   switch(ch)
   {
        
        case 1:printf("a\n");
            break;
        case 2:printf("e\n");
            break;
        case 3:printf("i\n");
            break;
        case 4:printf("o\n");
            break;
        case 5:printf("u\n");
            break;
        default:printf("Consonents");

   }
   


    return 0;
}
