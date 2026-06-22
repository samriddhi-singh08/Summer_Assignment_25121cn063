#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != '\n' && str1[i] != ' ')
            freq1[(unsigned char)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] != '\n' && str2[i] != ' ')
            freq2[(unsigned char)str2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq1[i] != freq2[i])
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}