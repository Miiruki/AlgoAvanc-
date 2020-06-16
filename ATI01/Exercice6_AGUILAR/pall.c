#include <stdio.h>

int pall(unsigned char* chaine, int len){
    int i = 0;
    int j = len - 1;
    unsigned char k;
    unsigned char inverse[100];
    while ( j > i ){
        k = chaine[i];
        chaine[i] = chaine [j];
        chaine[j] = k;
        inverse[i] = k;
        i++ , j--;
    }
    for ( i = 0; i < len ; i++){

        if ( chaine[i] != inverse[i] ){
            printf("Le mot n'est pas un palindrome \n");
            return 0;
        }
        else{
            printf("Le mot est un palindrome \n");
            printf("La chaine inversée est : %s\n",chaine);

            return 1;
        }
    }
    return i;
}
