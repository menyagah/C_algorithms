//
// Created by martin on 5/3/23.
//
#include <stdio.h>
#include <string.h>
#include "main.h"


int vowel_count(char *s1) {
    int count = 0;
    int i;

    for (i = 0; i < strlen(s1); i++)
    {
        switch (tolower(s1[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count ++;
        }
    }
    return count;
}
