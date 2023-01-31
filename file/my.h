/*
** EPITECH PROJECT, 2022
** plib
** File description:
** lib
*/

#pragma once

int my_putstr(char const *str);
int my_atoi(char *str);

typedef struct ps {
    int *l_a;
    int *l_b;
    int size;
    int size_a;
    int small;
}pushswap_t;

int structure(pushswap_t *ps, int argc, char **argv);
int check_arguments(char *str);
void ra_move(pushswap_t *ps);
void pa_move(pushswap_t *ps, int i);
void pb_move(pushswap_t *ps);
void sa_move(pushswap_t *ps);
