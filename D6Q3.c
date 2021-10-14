#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[50];
    printf("Enter a string :\n");
    gets(s);
    int i;
    int len=strlen(s);
    char c[50]={},tp;
    tp=s[0];
    strncat(c,&tp,1);
    for( i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && (s[i+1]>='A' && s[i+1]<='Z' ))
        {
            tp=s[i+1];
            strncat(c,&tp,1);
        }
        
    }
    puts(c);
    return 0;
}