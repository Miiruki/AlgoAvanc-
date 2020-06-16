#include <stdio.h>
#include "toolbox.h"
#include <stdlib.h>

int main(int argc, char **argv, char **envv)
{

    point_t message;
    message.chaine = malloc(100*sizeof(unsigned char));
    message.chaine[0] = 'H';
    message.chaine[1] = 'E';
    message.chaine[2] = 'L';
    message.chaine[3] = 'L';
    message.chaine[4] = 'O';
    message.chaine[5] = '\0';
    compteur(message.chaine);
    free (message.chaine);
    return 0;
}