#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer\n");
    scanf("%d",&num);
    int temp=num;
    int cnt=0,rev=0;
    printf("Digits = ");
    while(temp>0)
    {
        int rem=temp%10;
        printf("%d ",rem);
        cnt++;
        rev=(rev*10)+rem;
        temp/=10;
    }
    printf("\nNumber of digits : %d\n",cnt);
    printf("reverse of number : %d",rev);
    return 0;
}