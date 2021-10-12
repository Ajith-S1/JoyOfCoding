// Consider following three situations.
// Mr. Int work on daily wages. From Monday to Saturday, he earns ₹ 560, ₹ 660, ₹ 590, ₹ 760,
// ₹480, ₹960 respectively
// Mr. Float work on daily wages. From Monday to Saturday, he earns commission of ₹ 97.50,
// ₹66.0, ₹ 79.25, ₹ 76.55, ₹98.45, ₹96.40 respectively
// Mr. Char remembers the weekdays as M, T W T F S
// Write a C code to help all of them to enter and retrieve these details (hint declare, read and
// print array). Print them in reverse order as well.

#include <stdio.h>

int main()
{
    int num[8]={ 560, 660, 590, 760,480, 960};
    float flt[8] ={97.50,66.0, 79.25, 76.55, 98.45, 96.40 };
    char c[10];
    printf("Enter Mr int earnings from mon to sat :\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter Mr float earnings from mon to sat :\n");
    for(int i=0;i<6;i++)
    {
        scanf("%f",&flt[i]);
    }
    printf("Enter Mr char earnings from mon to sat :\n");
    for(int i=0;i<7;i++)
    {
        scanf("%c",&c[i]);
    }
    printf("Mr Int earns from Mon to sat :");
    for(int i=0;i<6;i++)
    {
        printf("%d  ",num[i]);
    }
    printf("\n");
    printf("Mr Char earns from Mon to sat :");
    for(int i=0;i<7;i++)        // a week has 7 days
    {
        printf("%c  ",c[i]);
    }
    printf("\n");
    printf("Mr float earns from Mon to sat :");
    for(int i=0;i<6;i++)        // a week has 7 days
    {
        printf("%.2f  ",flt[i]);
    }
    printf("\n  REVERSE \n");
    printf("Mr Int earns from  sat to mon:");
    for(int i=5;i>=0;i--)
    {
        printf("%d  ",num[i]);
    }
    printf("\n");
    printf("Mr Char earns from sat to mon :");
    for(int i=6;i>=0;i--)        // a week has 7 days
    {
        printf("%c  ",c[i]);
    }
    printf("\n");
    printf("Mr floar earns from sat to mon :");
    for(int i=5;i>=0;i--)        // a week has 7 days
    {
        printf("%.2f  ",flt[i]);
    }
    printf("\n");
    return 0;
}
