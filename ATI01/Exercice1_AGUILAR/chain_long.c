#include <stdio.h>


int compteur(unsigned char *chaine)
{
    int i;
    i = 0;
    while (chaine[i] != '\0'){
        i++;
    }
    printf("Le nombre de caractère est : %d\n",i);
    return i;
}
