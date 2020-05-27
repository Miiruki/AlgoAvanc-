#ifndef TOOLBOX_H
#define TOOLBOX_H

typedef struct point_s{
    unsigned char* chaine;
    int count;
    unsigned char* chain;
    char argument;

} point_t;

int compteur(unsigned char *chaine) ;

int min(unsigned char chaine[100]);

int mirror(unsigned char*, int);

int pall(unsigned char*, int);

int change(unsigned char chaine[100]);

int changer(unsigned char *, char a, char b);

#endif
