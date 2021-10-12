#include <stdio.h>
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
    printf("Enter the element to be removed  :\n");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            pos=i;
            break;
        }    
    }
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];   
    }
    n--;
    printf("new array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}