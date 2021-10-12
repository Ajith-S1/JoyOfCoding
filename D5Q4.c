#include <stdio.h>

int main()
{
    int a[100]={0};     // assuming max elements in array  is 100 and all elements are b/w 0 and 100
    int freq[100]={0};
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    printf("Frequency :\n");
    for(int i=0;i<100;i++)
    {
        if(freq[i]>0)
        {
            printf("%d  :   %d\n",i,freq[i]);
        }
    }
    return 0;
}