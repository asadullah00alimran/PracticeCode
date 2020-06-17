#include<stdio.h>
#include<string.h>
int main()
{
    char text1[50];
    char text2[50];
    int i;

    printf("Enter any string :");
    gets(text1);

    strcpy(text2,text1);

    printf("Copied string : %s",text2);

    return 0;
}
