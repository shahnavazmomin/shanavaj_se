// Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i,word=1,count=0;
    char str[100];
    printf("Enter your string here :");
    gets(str);

    for(i=0;str[i];i++)
    {
        if(str[i]==32)
        {
            word++;
        }
        
    }
    printf("The word of string =%d",word);
}
