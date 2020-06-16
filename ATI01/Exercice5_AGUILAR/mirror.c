#include <stdio.h>

void mirror(unsigned char* chaine, int len){
    int i = 0;
    int j = len - 1;
    unsigned char k;
    while ( j > i ){
        k = chaine[i];
        chaine[i] = chaine [j];
        chaine[j] = k;
        i++ , j--;
    }
    printf("La chaine inversée est : %s\n",chaine);
}
