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
    int num[8];
    float flt[8] ;
    int sumi=0;
    float sumf=0;
    printf("Enter Mr int earnings from mon to sat :\n");
    for(int i=0;i<6;i++)       
    {
        scanf("%d",&num[i]);
        sumi+=num[i];
    }
    printf("Enter Mr float earnings from mon to sat :\n");
    for(int i=0;i<6;i++)       
    {
        scanf("%f",&flt[i]);
        sumf+=flt[i];
    }
    printf(" Mr int total earnings from mon to sat : %d\n",sumi);
    printf(" Mr int average earnings from mon to sat : %d\n",sumi/6);
    printf(" Mr float total earnings from mon to sat : %.3f\n",sumf);
    printf(" Mr float average earnings from mon to sat : %.3f\n",sumf/6);
    return 0;
}