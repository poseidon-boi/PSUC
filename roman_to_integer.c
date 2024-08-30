#include <stdio.h>
#include <stdlib.h>

int romanToInt(char* s) {
    int i, converted_number=0;
    for(i=0; i<s[i] != '\0'; i++)
    {
        if(s[i] == 'I')
        {
            if(s[i+1] == '\0')
            {
                converted_number++;
                break;
            }
            else if(s[i+1] != 'V' && s[i+1] != 'X')
                converted_number++;
            else if(s[i+1] == 'V')
            {
                converted_number += 4;
                i++;
            }
            else
            {
                converted_number += 9;
                i++;
            }
        }
        else if(s[i] == 'X')
        {
            if(s[i+1] == '\0')
            {
                converted_number += 10;
                break;
            }
            else if(s[i+1] != 'L' && s[i+1] != 'C')
                converted_number += 10;
            else if(s[i+1] == 'L')
            {
                converted_number += 40;
                i++;
            }
            else
            {
                converted_number += 90;
                i++;
            }
        }
        else if(s[i] == 'C')
        {
            if(s[i+1] == '\0')
            {
                converted_number += 100;
                break;
            }
            else if(s[i+1] != 'D' && s[i+1] != 'M')
                converted_number += 100;
            else if(s[i+1] == 'D')
            {
                converted_number += 400;
                i++;
            }
            else
            {
                converted_number += 900;
                i++;
            }
        }
        else if(s[i] == 'V')
            converted_number += 5;
        else if(s[i] == 'L')
            converted_number += 50;
        else if(s[i] == 'D')
            converted_number += 500;
        else
            converted_number += 1000;
    }
    return converted_number;
}