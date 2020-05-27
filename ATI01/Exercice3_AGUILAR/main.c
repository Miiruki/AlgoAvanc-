#include <stdio.h>
#include <stdlib.h>
#include "toolbox.h"

int main(int argc, char **argv, char **envv)
{
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    point_t a;
    point_t b;
    a.argument = argv[1][0];
    b.argument = argv[2][0];
    int i =0;
    char* tab;
    tab = "HELLO WORLD";
    while (tab[i] != '\0'){
        message.chain[i] = tab[i];
        i++;
    }
    changer(message.chain,a.argument ,b.argument);
    printf("%s\n", message.chain);
    free(message.chain);
    return 0;
}
