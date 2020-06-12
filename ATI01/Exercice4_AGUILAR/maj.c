
void min(unsigned char* chaine)
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
}
