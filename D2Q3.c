// Simple claculator using switch

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op1,op2,res;
    char oper;
    printf("Enter the operator\n");  //operator 
    scanf("%c",&oper);
    printf("Enter two Integers :\n");  //operands
    scanf("%d%d",&op1,&op2);
    switch (oper)
    {
    case '+': res=op1+op2;
        break;
    case '-': res=op1-op2;
        break;
    case '*': res=op1*op2;
        break;
    case '%': res=op1%op2;
        break;
    case '/': if(op2==0)
                {
                    printf("Divide by zero error\n");
                    exit(0);
                }
                else
                    res=op1/op2;
        break;
    
    default: printf("not a valid operator\n");
        exit(0);
    }
    printf("result = %d",res);
    return 0;
}