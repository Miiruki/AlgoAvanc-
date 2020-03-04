#include <stdio.h>
#include <stdlib.h>
#include "mirror.h"

int main(int argc, char** argv, char **env){
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    char* tab;
    tab = "Hello World";
    int i = 0;
    while ( tab[i] != '\0'){
        message.chain[i] = tab [i];
        i++;
    }
    mirror(message.chain);
    printf("%s\n", message.chain);
    free(message.chain);
    return 0;
}
