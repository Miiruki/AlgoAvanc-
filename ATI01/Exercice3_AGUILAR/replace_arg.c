#include <stdio.h>
#include "toolbox.h"

void changer(unsigned char* chaine, char a, char b)
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] == a)
        {
            chaine[i] = b;
        }
        i++;
    }
    printf("%s\n",chaine);
}
