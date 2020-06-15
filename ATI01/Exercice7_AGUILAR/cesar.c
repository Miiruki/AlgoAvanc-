#include <stdio.h>

void cesar(unsigned char * tab , int code){
    int i = 0;
    while ( tab[i] != '\0'){
        if (tab[i] >= 'A' && tab[i] <= 'Z'){
            char cesar = tab[i] - 'A';
            cesar = cesar + code;
            cesar = cesar % 26;
            tab[i] = cesar + 'A';
        }
        i++;
    }
    printf ("La chaine codée est : %s\n", tab);
}