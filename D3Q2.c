#include <stdio.h>

int digsum(int temp)
{
    int sum=0;
    while(temp>0)
    {
        int rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter an integer\n");
    scanf("%d",&num);
    int temp=num;
    int sum=0,res=0;
    res = digsum(temp);  // digsum is a user define fuction written above
    printf("Sum of digits : %d\n",res);
    int tmp2=res;
    int fres=0;
        do
        {
             fres+=digsum(tmp2);
             tmp2=fres;
        }while(fres>9);
        printf("single digit Sum : %d\n",fres);
    return 0;
}