/*
** EPITECH PROJECT, 2019
** stract
** File description:
** je sais pas
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    int lon1 = my_strlen(dest);
    int lon2 = my_strlen(src);
    while (lon1 + i <= lon1 + lon2) {
        dest[lon1 + i] = src[i];
        i++;
    }
    dest[lon1 + i] = '\0';
    return (dest);
}
