/*
** EPITECH PROJECT, 2018
** my_sort params
** File description:
** sort parameters in ascii order and displa them
*/

#include "my.h"
#include <unistd.h>

static int check_swap(char **av, int *order, int i)
{
    int k = 0;

    if (order[i] > 0 && av[order[i]][k] < av[order[i - 1]][k])
        return (1);
    else if (order[i] > 0 && av[order[i]][k] == av[order[i - 1]][k]) {
        while (av[order[i]][k] == av[order[i - 1]][k])
            k += 1;
        if (av[order[i]][k] < av[order[i - 1]][k])
            return (1);
        else
            return (0);
    } else
        return (0);
}

static void disp_params(int ac, char **av, int *order)
{
    int i = 0;

    while (i != ac) {
        my_putstr(av[order[i]]);
        my_putchar('\n');
        i += 1;
    }
}

void my_sort_params(int ac, char **av)
{
    int i = 0;
    int order[ac];
    int tmp = 0;

    while (i != ac) {
        order[i] = i;
        i += 1;
    }
    i = 0;
    while (i != ac) {
        if (check_swap(av, order, i) == 1) {
            tmp = order[i];
            order[i] = order[i - 1];
            order[i - 1] = tmp;
            i -= 2;
        }
        i += 1;
    }
    disp_params(ac, av, order);
}
