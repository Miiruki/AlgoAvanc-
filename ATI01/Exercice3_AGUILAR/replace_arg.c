int changer(unsigned char chaine[100], char a, char b)
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] == a)
        {
            chaine[i] = b;
        }
        i++;
    }
    return i;
}