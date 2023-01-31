/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** move
*/

#include "my.h"

void pa_move(pushswap_t *ps, int i)
{
    ps->l_a[0] = ps->l_b[0];
    for (int i = 0; i < ps->size; i++)
        ps->l_a[i + 1] = ps->l_a[i];
    for (int i = 0; i < ps->size; i++)
        ps->l_b[i] = ps->l_b[i + 1];
    if (++i < ps->size)
        my_putstr("pa ");
    else
        my_putstr("pa");
}

void pb_move(pushswap_t *ps)
{
    ps->l_b[0] = ps->l_a[0];
    for (int i = 0; i < ps->size_a; i++)
        ps->l_b[i + 1] = ps->l_b[i];
    for (int i = 0; i < ps->size_a; i++)
        ps->l_a[i] = ps->l_a[i + 1];
    ps->size_a--;
    my_putstr("pb ");
}

void ra_move(pushswap_t *ps)
{
    int tmp_la_zero = ps->l_a[0];
    int i;
    for (i = 0; i < ps->size_a; i++)
        ps->l_a[i] = ps->l_a[i + 1];
    ps->l_a[i - 1] = tmp_la_zero;
    my_putstr("ra ");
}

void sa_move(pushswap_t *ps)
{
    int tmp_la_zero = ps->l_a[0];
    ps->l_a[0] = ps->l_a[1];
    ps->l_a[1] = tmp_la_zero;
    my_putstr("sa ");
}
