// /*
// Write a program in C to compare two strings without using string library
// functions.*/
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char  str1[100],str2[100];
//    int a=1,i,m=0;
//    printf("Enter str1:");
//    gets(str1);
//    printf("\nEnter str2:");
//    gets(str2);
//    for(i=0;str1[i];i++)
//    {

//     for(m=0;;m++)
//     {
//         if(str1[i]==str2[m])
//         {

//             printf("yes");
//         }

//     }

//    }

// }
#include <stdio.h>

int main()

{

    char a[10], b[10];

    int i, n = 0, r = 0, j = 0;

    scanf("%s", a);

    scanf("%s", b);

    while (a[n] != '\0')

        n++;

    while (b[r] != '\0')

        r++;

    if (n == r)

    {

        for (i = 0; i < n; i++)

        {

            if (a[i] == b[i])

                j++;
        }
    }

    if (j == r)

        printf("same");

    else

        printf("not same");

    return 0;
}