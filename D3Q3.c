#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer\n");
    scanf("%d",&num);
    int temp=num;
    int cnt=0,sum=0;
    while(temp>0)
    {
        int rem=temp%10;
        cnt++;
        sum+=rem;
        temp/=10;
    }
    printf("Increased sum of digits : %d\n",cnt+sum);
    return 0;
}