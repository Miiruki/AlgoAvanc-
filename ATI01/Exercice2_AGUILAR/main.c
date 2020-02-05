#include <stdio.h>
#include "replace.h"
int main(int argc, char **argv, char **envv)
{
    unsigned char message[100];
    message[0] = 'H';
    message[1] = 'E';
    message[2] = 'L';
    message[3] = 'L';
    message[4] = 'O';
    message[5] = ' ';
    message[6] = 'W';
    message[7] = 'O';
    message[8] = 'R';
    message[9] = 'L';
    message[10] = 'D';
    message[11] = ' ';
    message[12] = '\0';
    changer(message);
    printf("%s\n", message);
    return 0;
}