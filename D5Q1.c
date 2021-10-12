#include <stdio.h>
int main()
{
    int a[100]={0};
    int n,x,p1,p2;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted  :\n");
    scanf("%d",&x);
    printf("Enter the element in b/w which elements must be inserted  :\n");
    scanf("%d%d",&p1,&p2);
    n++;
    for(int i=n-1;i>=0;i--)
    {
        a[i]=a[i-1];
        if(a[i]==p2)
        {
            a[i-1]=x;
            break;
        }
    }
    printf("new array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}