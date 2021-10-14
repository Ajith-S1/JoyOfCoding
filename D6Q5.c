#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check(char s[])
{
    int n=strlen(s);
    int l=0,h=n-1;
    while(l<h)
    {
        if(s[l++]!=s[h--])
        {
            printf("Not a Plaindrome\n");
            return;
        }
    }
    printf("String is Palindrome\n");
    return;
}
int main()
{
    char s[50];
    printf("Enter a string :\n");
    gets(s);
    check(s);
    return 0;
}