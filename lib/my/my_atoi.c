/*
** EPITECH PROJECT, 2022
** my_atoi
** File description:
** atoi
*/

int my_atoi(char *str)
{
    int dest = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    for (int j = i; str[j] != '\0'; j++)
        dest = dest * 10 + (str[j] - '0');
    dest = (dest * sign);
    return (dest);
}
