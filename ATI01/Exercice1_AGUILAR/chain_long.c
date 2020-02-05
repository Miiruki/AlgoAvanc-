int compteur(unsigned char chaine[100])
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
        i++;
    return i;
}
