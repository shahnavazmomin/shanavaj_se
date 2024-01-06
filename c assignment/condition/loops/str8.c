/*Write a program in C to count the total number of vowels or consonants in a
string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i,vowals=0,consonants=0;
    printf("Enter your name :");
    gets(name);

    for(i=0;name[i];i++)
    {
        if(name[i]==97 ||name[i]==101||name[i]==105||name[i]==111||name[i]==117)
        {
            vowals++;
        }
        else
        {
            consonants++;
        }
    }
    printf("Vowals in the string = %d\n",vowals);
    printf("Consonsnta in the string = %d",consonants);
}
