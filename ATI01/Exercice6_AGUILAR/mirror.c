#include <stdio.h>

int mirror(unsigned char* chaine, int len){
    int i = 0;
    int j = len - 1;
    unsigned char k;
    while ( j > i ){
        k = chaine[i];
        chaine[i] = chaine [j];
        chaine[j] = k;
        i++ , j--;
    }
    if ( chaine[i] == chaine [j]){
        printf("Le mot suivant est un palindrome %s\n",chaine[i]);
    }
    else
    {
        printf("Le mot suivant n'est pas un palindrome %s\n", chaine[j]);
    }
    return i;
}
