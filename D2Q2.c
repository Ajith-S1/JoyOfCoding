#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 integers : \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1<0 || n2<0 || n3<0)
    {
        printf("invalid number in input\n");
        exit(0);
    } else 
    {
        int lrg=0;
        lrg = (n1>n2)? n1:n2;
        printf("%d is large of %d , %d\n",lrg,n1,n2);
        lrg = (n1>n2 && n1>n3) ? n1 : ((n2>n3)? n2 :n3);
        printf("%d is large of %d , %d , %d\n",lrg,n1,n2,n3);
    }
    return 0;
}