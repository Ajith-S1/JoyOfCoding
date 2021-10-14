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
    printf("Length of string is %d\n",strlen(s));
    char c[12]=" Bengaluru";
    printf("Concatination of string is %s\n",strcat(s,c));
    printf("Upper case string :\n");
    for( i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ' && (s[i]>='a' && s[i]<='z' ))
        s[i]-=32;
    }
    puts(s);
    return 0;
}