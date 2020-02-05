#include <stdio.h>
#include "chain_long.h"

int main(int argc, char **argv, char **envv)
{
    unsigned char message[100];
    int c;
    message[0] = 'H';
    message[1] = 'E';
    message[2] = 'L';
    message[3] = 'L';
    message[4] = 'O';
    message[5] = '\0';
    compteur(message);
    c = compteur(message);
    printf("Le nombre de caractères est de : "
           "%d\n",
           c);
    return 0;
}