#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystricmp(const char *s1, const char *s2)
{
    char ss1, ss2;

    while(1)
    {
        if(*s1 != *s2)
        {
            ss1 = *s1 + 32*(*s1 >= 'A' && *s1 <= 'Z');
            ss2 = *s2 + 32*(*s1 >= 'A' && *s2 <= 'Z');

            if (ss1 != ss2) break;
        }
        if (*s1 == 0) break;
        s1++;
        s2++;
    }
    if (*s1 == *s2) return 0;

    return ss1 - ss2;
}

int main()
{
    printf("stricmp()--> %d\n", stricmp("aBc", "abc"));
    printf("mystricmp()--> %d\n", mystricmp("aBc", "abc"));
}
