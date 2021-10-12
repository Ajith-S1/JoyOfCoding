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
    int maxi=0;
    float maxf=0;
    printf("Enter Mr int earnings from mon to sat :\n");
    for(int i=0;i<6;i++)       
    {
        scanf("%d",&num[i]);
        maxi = ((num[i]>maxi)? num[i]:maxi);
    }
    printf("Enter Mr float earnings from mon to sat :\n");
    for(int i=0;i<6;i++)       
    {
        scanf("%f",&flt[i]);
        maxf = ((flt[i]>maxf)? flt[i]:maxf);
    }
    printf(" Mr int  maximum earnings from mon to sat : %d\n",maxi);
    printf(" Mr float maximum earnings from mon to sat : %.3f\n",maxf);
    return 0;
}