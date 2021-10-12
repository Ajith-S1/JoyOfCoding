#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Coded pin\n");
    scanf("%d",&num);
    int temp=num;
    int p[100],rev=0,i=0;
    while(temp>0)
    {
        int rem=temp%10;
        p[i]=rem;
        i++;
        temp/=10;
    }
    printf("real Pin : ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",p[j]+1);
    }
    return 0;
}