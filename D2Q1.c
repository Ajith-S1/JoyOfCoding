#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    (age >=18) ? printf("\nYou are eligible to vote!"): printf("\nYou are not eligible to vote:(");
}