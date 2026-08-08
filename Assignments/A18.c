// Write a C program that accepts a string from the user and performs the following string operations:
// i) Calculate length of string ii) String reversal iii) Equality check of two strings iv) Check palindrome v) Check substring.
#include <stdio.h>
int main()
{
    char str1[100];
    char rev[100];
    scanf("%s", str1);
    int i = 0, len = 0;
    // calculate length
    while (str1[i] != '\0')
    {
        len++;
        i++;
    }
    // string reversal
    for (int i = len; i >= 0; i--)
    {
        rev[len - i] = str1[i];
    }
    // string comaparison
    char str2[100];
    int flag = 0;
    scanf("%s", str2);
    for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The Strings are equal");
    }
    else
    {
        printf("String are not equal");
    }
    // Palindrome
    flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == rev[i])
        {
            flag++;
        }
    }
    if (flag == len)
    {
        printf("its a Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome");
    }
}