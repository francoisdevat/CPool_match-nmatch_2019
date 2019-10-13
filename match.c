/*
** EPITECH PROJECT, 2019
** match 
** File description:
** comparateur de 2 string
*/

intmatch(char *s1, char *s2)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(s1[a] =! '\0')
    {
        while (s1[a] == s2[b] || s2[a] == '*')
        {
            a++;
            b++;
            if (s1[a] == '\0' && s2[b] == '\0')
                return (1);
        }
        if (s2[a] == '*' && s2[b + 1] == '\0')
            return (1);
        if (s2[a] == '*')
            while (s2[a + 1] != s1[b])
                a++;
        else
            return (0);
        b++;
    }
    return (1);
}
