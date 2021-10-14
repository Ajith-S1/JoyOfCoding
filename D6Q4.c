#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[50];
    printf("Enter a string :\n");
    gets(s);
    int i;
    int len=1;
    for( i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            len++;
        }   
    }
    printf("No of words in string : %d \n",len);
    return 0;
}