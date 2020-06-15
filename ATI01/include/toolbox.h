#ifndef TOOLBOX_H
#define TOOLBOX_H

typedef struct point_s{
    unsigned char* chaine;
    int count;
    unsigned char* chain;
    char argument;

} point_t;

int compteur(unsigned char *chaine) ;

void min(unsigned char chaine[100]);

void mirror(unsigned char*, int);

int pall(unsigned char*, int);

void change(unsigned char chaine[100]);

void changer(unsigned char *, char a, char b);

void cesar(unsigned char * tab , int code);

#endif
