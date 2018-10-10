/*
** EPITECH PROJECT, 2018
** my rev params
** File description:
** print reverse all parameters
*/

#include "my.h"

void my_rev_params(int ac, char **av)
{
    int i = ac - 1;

    while (i != -1) {
        my_putstr(av[i]);
        my_putchar('\n');
        i -= 1;
    }
}
