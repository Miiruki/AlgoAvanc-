#include <stdio.h>
#include "maj.h"

int main(int argc, char **argv, char **envv)
{
    unsigned char message[100];
    message[0] = 'H';
    message[1] = 'e';
    message[2] = 'L';
    message[3] = 'l';
    message[4] = 'O';
    message[5] = ' ';
    message[6] = 'W';
    message[7] = 'o';
    message[8] = 'R';
    message[9] = 'L';
    message[10] = 'd';
    message[11] = ' ';
    message[12] = '\0';
    min(message);
    printf("%s\n", message);
    return 0;
}