int compteur(unsigned char *chaine)
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
        i++;
    return i;
}
