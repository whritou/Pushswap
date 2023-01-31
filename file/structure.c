/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** structure
*/

#include "my.h"
#include <stdlib.h>

void pushswap(pushswap_t *ps)
{
    ps->small = ps->l_a[0];
    for (int i = 1; i < ps->size_a; i++)
        if (ps->small > ps->l_a[i])
            ps->small = ps->l_a[i];
    if (ps->small == ps->l_a[1]) {
        sa_move(ps);
        pb_move(ps);
    }
    if (ps->small != ps->l_a[0] && ps->size_a != 1)
        ra_move(ps);
    else if (ps->size_a != 1)
        pb_move(ps);
}

int already_sorted_list(pushswap_t *ps)
{
    for (int i = 0; i < ps->size - 1; i++)
        if (ps->l_a[i] > ps->l_a[i + 1])
            return (0);
    return (15);
}

int structure(pushswap_t *ps, int argc, char **argv)
{
    ps->size = argc - 1;
    ps->size_a = argc - 1;
    ps->l_a = malloc(sizeof(int) * (ps->size+ 1));
    ps->l_b = malloc(sizeof(int) * (ps->size + 1));
    for (int i = 0; i < ps->size; i++) {
        if (check_arguments(argv[i + 1]) == 0)
            return (15);
        ps->l_a[i] = my_atoi(argv[i + 1]);
    }
    if (already_sorted_list(ps) == 15)
        return (0);
    while (ps->size_a > 1)
        pushswap(ps);
    for (int i = 1; i < ps->size; i++)
        pa_move(ps, i);
    return (0);
}
