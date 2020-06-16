#include <stdio.h>
#include <stdlib.h>
#include "toolbox.h"

int main(int argc, char** argv, char **env){
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    char* tab;
    tab = "esoperesteicietserepose";
    int i = 0;
    int j = 0;
    while ( tab[i] != '\0'){
        message.chain[i] = tab [i];
        i++;
        j++;
    }
    printf("La chaine non-inversée est : %s\n" , message.chain);
    pall(message.chain, j);
    free(message.chain);
    return 0;
}