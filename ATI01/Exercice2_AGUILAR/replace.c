#include <stdio.h>

void change(unsigned char *chaine)
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
    printf("%s\n", chaine);

}
