#include <stdio.h>
#include "chain_long.h"
#include <stdlib.h>

int main(int argc, char **argv, char **envv)
{

    point_t message;
    message.chaine = malloc(100*sizeof(unsigned char));
    point_t c;
    c.count=0;
    message.chaine[0] = 'H';
    message.chaine[1] = 'E';
    message.chaine[2] = 'L';
    message.chaine[3] = 'L';
    message.chaine[4] = 'O';
    message.chaine[5] = '\0';
    compteur(message.chaine);
    c.count = compteur(message.chaine);
    printf("Le nombre de caractères est de : " "%d\n",c.count);
    free (message.chaine);
    return 0;
}
