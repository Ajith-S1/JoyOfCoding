#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer\n");
    scanf("%d",&num);
    int temp=num;
    int sum=0;
    int a[100],i=0,j;
    while(temp>0)
    {
        int rem=temp%10;
        if(rem!=0)
        {
            a[i]=rem;
            i++;
        }
        temp/=10;
    }
    for(j=i-1;j>0;j--)
    {
        printf("%d,",a[j]);
    }
    printf("%d",a[0]);
    return 0;
}