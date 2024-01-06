/*
Write a program in C to separate individual characters from a string.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100],moin[100];;
    int i,m=0;
    printf("Enter your string here :");
    gets(name);

    m=strlen(name);
    for(i=m;i>=0;i--)
    {
        printf("%c ",name[i]);
    }

 }
