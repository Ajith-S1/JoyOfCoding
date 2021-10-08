#include <stdio.h>
int main()
{
    float books;
    printf("Enter number of books : ");
    scanf("%f",&books);
    if(books<=10000)            
    {
        printf("\nNO Discount");
    }
    else if(books>10000 && books<=15000)
    {
        printf("\n 10%% discount ,Total : %.3f Rs",(0.9*books));
    }
    else if(books>15000 && books<=20000)
    {
        printf("\n 20%% discount ,Total : %.3f Rs",(0.8*books));
    }
    else 
    {
        printf("\n books is more than 20000");
    }
    return 0;
}