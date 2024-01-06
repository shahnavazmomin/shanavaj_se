// Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    char str2[20];
    printf("Enter your strings in str2=");
    gets(str2);
    
    strcpy(str,str2);
    printf("Copy string to another string :%s",str);
}
