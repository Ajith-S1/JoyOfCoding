#include <stdio.h>

void check(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("Not a Unique array !\n");
                return;
            }
        }
    }
    printf("It is a Unique array !\n");
    return;
}
int main()
{
    int a[100]={0};
    int n,x,pos;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    check(a,n);
    return 0;
}