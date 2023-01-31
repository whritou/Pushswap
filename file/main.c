/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** main
*/

#include "my.h"
#include <stdlib.h>

int check_arguments(char *str)
{
    int i = 0;
    int j = 0;
    if (str[i] == '-')
        i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            j = 1;
        else
            j = 0;
    }
    return (j);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    if (argc == 2) {
        my_putstr("\n");
        return (0);
    }
    pushswap_t *ps = malloc(sizeof(struct ps));
    if (structure(ps, argc, argv) == 15) {
        free(ps->l_a);
        free(ps->l_b);
        free(ps);
        return (84);
    }
    my_putstr("\n");
    free(ps->l_a);
    free(ps->l_b);
    free(ps);
    return (0);
}
