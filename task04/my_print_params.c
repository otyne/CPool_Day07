/*
** EPITECH PROJECT, 2018
** my print params
** File description:
** print all parameters
*/

#include "my.h"

void my_print_params(int ac, char **av)
{
    int i = 0;

    while (i != ac) {
        my_putstr(av[i]);
        my_putchar('\n');
        i += 1;
    }
}
