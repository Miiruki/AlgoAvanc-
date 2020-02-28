
int min(unsigned char chaine[100])
{
    int i;
    int j;
    i = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] >= 'a' && chaine[i] <= 'z')
        {
            j = 'a' - 'A';
            chaine[i] = chaine[i] - j;
        }
        i++;
    }
    return i;
}
