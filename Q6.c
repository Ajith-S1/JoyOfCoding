#include <stdio.h>
int main()
{
    int a=4,b=7,c=8;
    (a>b)?printf("%d is large of a,b\n",a) : printf("%d is large of a,b\n",a);
    (a>b && a>c) ? printf("%d is large of a,b,c\n",a) : ((b>c)?printf("%d is large of a,b,c\n",b) :printf("%d is large of a,b,c\n",c));
    
    return 0;
}