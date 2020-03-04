#include <stdio.h>
#include <stdlib.h>
#include "replace.h"

int main(int argc, char **argv, char **envv)
{
    point_t message;
    message.chain = malloc(100*sizeof(unsigned char));
    message.chain[0] = 'H';
    message.chain[1] = 'E';
    message.chain[2] = 'L';
    message.chain[3] = 'L';
    message.chain[4] = 'O';
    message.chain[5] = ' ';
    message.chain[6] = 'W';
    message.chain[7] = 'O';
    message.chain[8] = 'R';
    message.chain[9] = 'L';
    message.chain[10] = 'D';
    message.chain[11] = ' ';
    message.chain[12] = '\0';
    changer(message.chain);
    printf("%s\n", message.chain);
    free (message.chain);
    return 0;
}
