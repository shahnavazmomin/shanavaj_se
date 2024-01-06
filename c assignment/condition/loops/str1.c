// Write a program in C to find the length of a string without using library
//functions.
#include <stdio.h>
int main()
{
    char name[100]; 
    int i;
    printf("Enter your good name :");
    gets(name);
    for(i=0;name[i];i++);
    printf("The lenght of string = %d",i);
   
}
