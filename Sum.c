#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    int sum;
    float average;
    sum=a+b;
    average=(a+b)/2;
    printf("Sum is %d\n",sum);
    printf("Average is %f",average);
    return 0;

}   