#include <stdio.h>
#include <stdlib.h>
#include "toolbox.h"


int main(int argc, char** argv, char **env){
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    char* tab;
    tab = "VIV LES RT";
    int i = 0;
    while ( tab[i] != '\0'){
        message.chain[i] = tab [i];
        i++;
    }
    cesar (message.chain,2);
    free(message.chain);
    return 0;
}