#include <stdio.h>

int change(unsigned char *chaine)
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
