//
//  main.c
//  stricmp_mystricmp.c
//
//  Created by 김혜진's MAC on 12/04/2019.
//  Copyright © 2019 김혜진's MAC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystricmp(const char *s1, const char *s2)
{
    int i;
    
    for(i=0; i<10; i++)
    {
        if(tolower(s2[i]), tolower(s1) ==0)
            return 1;
    }
    return 0;
}

int main()
{
    printf("stricmp()--> %d\n", stricmp("aBc","abc"));
    printf("mystricmp()--> %d\n", mystricmp("aBc","abc"));
}
