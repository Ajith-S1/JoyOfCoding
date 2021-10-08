#include <stdio.h>
int main()
{
    int rank;
    printf("Enter Your CET rank : \n");
    scanf("%d",&rank);
    if(rank<=3250)            //CSE 3250    ISE 6505    EandC 12012     MEC 22340
    {
        printf("Eligible to all Branches\n");
    }
    else if(rank>3250 && rank<=6505)
    {
        printf("Eligible to ISE , E and C , MEC Branches\n");
    }
    else if(rank>6505 && rank<=12012)
    {
        printf("Eligible to  E and C , MEC Branches\n");
    }
    else if(rank>12012 && rank<=22340)
    {
        printf("Eligible to  MEC Branch \n");
    }
    else
    {
        printf("Not eligible to any branches\n");
    }
    return 0;
}