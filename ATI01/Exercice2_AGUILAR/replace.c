#include <stdio.h>

int changer(unsigned char chaine[100])
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] == ' ')
        {
            chaine[i] = '_';
        }
        i++;
    }
    return i;
}