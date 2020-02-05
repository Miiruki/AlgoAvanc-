#include <stdio.h>
#include "replace_arg.h"

int main(int argc, char **argv, char **envv)
{
    unsigned char message[100];
    char a = argv[1][0];
    char b = argv[2][0];
    message[0] = 'H';
    message[1] = 'L';
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
    changer(message,a ,b);
    printf("%s\n", message);
    return 0;
}