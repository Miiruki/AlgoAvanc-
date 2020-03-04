#include <stdio.h>
#include <stdlib.h>
#include "maj.h"

int main(int argc, char **argv, char **envv)
{
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    char* tab;
    tab = "HeLlo WoRLd";
    int i = 0;
    while (tab[i] != '\0'){
        message.chain[i] = tab[i];
        i++;
    }
    min(message.chain);
    printf("%s\n", message.chain);
    free(message.chain);
    return 0;
}
